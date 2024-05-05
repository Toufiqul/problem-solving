#include <bits/stdc++.h>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    vector<int> inOrder;
    inOrder.push_back(0);
    vector<int> revOrder = {0};
   
    
    // if (!nums.empty()) {
    //     inOrder.push_back(nums[0]); // Initialize inOrder with the first element of nums
    // }

    // for (int i = 1; i < nums.size(); i++) {
    //     inOrder.push_back(inOrder.back() + nums[i]); // Add subsequent elements to inOrder
    // }


    // // cout << inOrder.size();
    for (int i = 0; i < nums.size(); i++)
    {
        inOrder.push_back(*inOrder.crbegin() + nums[i]);
        revOrder.push_back(*revOrder.crbegin() + nums[nums.size() - i - 1]);
    }
    // inOrder.erase(inOrder.begin());
    // revOrder.erase(revOrder.begin());
    // for (int i = 0; i < revOrder.size(); i++)
    // {
    //     if (inOrder[i] == revOrder[i])
    //         return i;
    // }
    // // cout<<endl;
    for(int i = 1; i < revOrder.size();i++){cout<<revOrder[i]<< " ";}
    cout<<endl;
    for(int i = 1; i < revOrder.size();i++){cout<<inOrder[i]<< " ";}
    return -1;
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};
    cout<<pivotIndex(nums);
    return 0;
}