#include <bits/stdc++.h> // for std::transform
using namespace std;
vector<int> calCumsum(vector<int> &nums)
{
    vector<int> cumsum;
    cumsum.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        int sum = *cumsum.end() + nums[i];
        cumsum.push_back(*(cumsum.end() - 1) + nums[i]);
    }
    return cumsum;
}

int main()
{
    vector<int> nums = {5, 4, -1, 7, 8};
    vector<int> cumsum = calCumsum(nums);
    for (int i = 0; i < cumsum.size(); i++)
        cout << cumsum[i] << " ";
    cout << endl
         << cumsum.size() << " " << nums.size();

    return 0;
}