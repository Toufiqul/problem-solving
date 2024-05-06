#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{

    vector<int> cumsum;
    cumsum.push_back(nums[0]);
    int size = nums.size();
    for (int i = 1; i < nums.size(); i++)
    {
        cumsum.push_back(cumsum.back() + nums[i]);
        // cumsum.push_back(*cumsum.crbegin()+ nums[i]);
    }
    // for(int i =0;i<nums.size();i++){cout<<cumsum[i]<<" ";}
    if (cumsum[nums.size() - 1] - cumsum[0] == 0)
        return 0;
    for (int i = 1; i < nums.size() - 1; i++)
    {
        if (cumsum[i - 1] == cumsum[nums.size() - 1] - cumsum[i])
            return i;
    }

    if (cumsum[nums.size() - 2] == 0)
        return nums.size() - 1;

    return -1;
}

int main()
{

    vector<int> nums = {1, 7, 3, 6, 5, 6};
    // vector<int> nums = {2,1,-1};
    cout << pivotIndex(nums);

    return 0;
}