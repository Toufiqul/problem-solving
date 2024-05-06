#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    vector<int> r;
    int n = nums.size();
    k = k % n;

    for (int i = n - k; i < nums.size(); i++)
    {
        r.push_back(nums[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        r.push_back(nums[i]);
    }
    nums = r;
}

void rotate2(vector<int> &nums, int k)
{
    int n = nums.size();
    k=k % n;
    auto it = nums.begin();

    for(int i =0;i<n-k;i++){
        nums.push_back(nums[i]);
        it++;
    }
    // cout<<*it<<endl;
    nums.assign(it,nums.end());
    nums.begin() = it;
    cout<<nums.size()<<endl;
    for(int i =0;i<nums.size();i++){ cout<<nums[i]<<" ";}
}

int main()
{
    vector<int>nums = {1,2,3,4,5,6,7};
    int k = 3;
    //     vector<int>nums = {-1,-100,3,99};
    // int k = 2;
    // vector<int> nums = {-1};
    // int k = 2;

    rotate2(nums, k);

    return 0;
}