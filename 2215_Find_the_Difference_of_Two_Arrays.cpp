#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> unique1, unique2;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    for (int i = 0; i < nums1.size(); i++)
    {
        if (!binary_search(nums2.begin(), nums2.end(), nums1[i]) && !binary_search(unique1.begin(), unique1.end(), nums1[i]))
            unique1.push_back(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if (!binary_search(nums1.begin(), nums1.end(), nums2[i]) && !binary_search(unique2.begin(), unique2.end(), nums2[i]))
            unique2.push_back(nums2[i]);
    }

    vector<vector<int>> ans;
    ans.push_back(unique1);
    ans.push_back(unique2);

    return ans;
}

vector<vector<int>> findDifference2(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> mp;
    vector<int> unique1, unique2;
    for (int i = 0; i < nums1.size(); i++)
    {
        // if(mp.find(nums1[i])!=mp.end())
        // mp[nums1[i]] = 1;
        // else
        mp.insert({nums1[i], 1});
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        if (mp.find(nums2[i]) != mp.end() && mp[nums2[i]]!=2)
            mp[nums2[i]] = 3;
        else
            mp.insert({nums2[i], 2});
    }

    for (auto i : mp)
    {
        cout<<i.first<<" "<<i.second<<endl<<endl;
        if (i.second == 1)
        {
            unique1.push_back(i.first);
        }
        else if (i.second == 2)
        {
            unique2.push_back(i.first);
        }
    }
    vector<vector<int>> ans;
    ans.push_back(unique1);
    ans.push_back(unique2);
    for (int i = 0; i < ans[0].size(); i++)
    {
        cout << ans[0][i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ans[1].size(); i++)
    {
        cout << ans[1][i] << " ";
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {-80,-15,-81,-28,-61,63,14,-45,-35,-10}, nums2 = {-1,-40,-44,41,10,-43,69,10,2};
    findDifference2(nums1, nums2);
    return 0;
}