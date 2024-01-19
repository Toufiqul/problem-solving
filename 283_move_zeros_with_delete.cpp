#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    vector<int> v;
    int s = nums.size();
    if (s == 1)
        return;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {

        /**nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());  better way of erasing. move all the zeros to the end of the vector in remove, then earase all the zeros. erase-remove idiom*/
        if (*i == 0)
        {
            nums.erase(i);
        }
    }

    for (int j = nums.size(); j < s; j++)
    {
        nums.push_back(0);
    }

    for (int j = 0; j < nums.size(); j++)
    {
        cout << nums[j] << endl;
    }
}

int main()
{
    vector<int> nums{0, 1, 0, 3, 12};
    // vector<int> nums{0};

    moveZeroes(nums);

    return 0;
}