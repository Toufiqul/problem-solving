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

    // for (int i = 0; i < unique1.size(); i++)
    // {
    //     cout << unique1[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < unique2.size(); i++)
    // {
    //     cout << unique2[i] << " ";
    // }

    return ans;
}

int main()
{
    vector<int> nums1 = {1, 2, 3}, nums2 = {2, 4, 6};
    findDifference(nums1, nums2);
    return 0;
}