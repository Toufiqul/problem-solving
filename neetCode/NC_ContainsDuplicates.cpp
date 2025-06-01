#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3};
    cout << hasDuplicate(nums);
    return 0;
}