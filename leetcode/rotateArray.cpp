#include <bits/stdc++.h>
using namespace std;
void rorateSubArray(vector<int> &nums, int l, int r)
{
    int temp;
    while (l < r)
    {
        temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
}

void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    // cout << k;
    if (k == 0)
        return;
    rorateSubArray(nums, 0, nums.size() - 1);
    rorateSubArray(nums, 0, k - 1);
    rorateSubArray(nums, k, nums.size() - 1);
}

void rotateFailed(vector<int> &nums, int k)
{
    int size = nums.size();
    pair<int, int> temp = {0, nums[0]};
    int swapT;
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << nums[j] << " ";
        }
        cout << endl;
        // cout << "been in here";
        swapT = nums[(temp.first + k) % size];
        nums[(temp.first + k) % size] = temp.second;
        temp.first = (temp.first + k) % size;
        temp.second = swapT;
    }
}

int main()
{
    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> nums = {-1};
    // vector<int> nums = {-1, -100, 3, 99};
    int k = 2;
    // cin >> k;
    rotate(nums, k);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
