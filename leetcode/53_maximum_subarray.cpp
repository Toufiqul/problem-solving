#include <bits/stdc++.h>
using namespace std;

int findLargestIndex(vector<int> &nums)
{
    int temp = INT_MIN;
    int ind = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= temp)
        {
            ind = i;
            temp = nums[i];
        }
    }
    return ind;
}
int findSmallestInd(vector<int> &nums, int rLim)
{
    int temp = INT_MAX;
    int ind = -1;
    for (int i = 0; i < rLim; i++)
    {
        if (nums[i] < temp)
        {
            ind = i;
            temp = nums[i];
        }
    }
    return ind;
}
vector<int> calCumsum(vector<int> &nums)
{
    vector<int> cumsum;
    cumsum.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        // int sum = *cumsum.end() + nums[i];
        cumsum.push_back(*(cumsum.end() - 1) + nums[i]);
    }
    return cumsum;
}

int main()
{
    // vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> nums = {5, 4, -1, 7, 8};
    vector<int> nums = {-1};
    vector<int> cumsum = calCumsum(nums);
    int maxInd = findLargestIndex(cumsum);
    int minInd = findSmallestInd(cumsum, maxInd);
    if (minInd)
        cout << cumsum[maxInd] - cumsum[minInd] << endl;
    else
        cout << cumsum[maxInd] << endl;

    cout << minInd << " " << maxInd << " " << cumsum[maxInd] - cumsum[minInd];
    // for (int i = 0; i < cumsum.size(); i++)
    //     cout << cumsum[i] << " ";
    // cout << endl
    //      << cumsum.size() << " " << nums.size();

    return 0;
}