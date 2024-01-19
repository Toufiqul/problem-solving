#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{

vector<int>v;
for(int i=0; i<nums.size(); i++){
    if(nums[i]!=0){
        v.push_back(nums[i]);
    }
}
int i;
for(i=0; i<v.size(); i++){nums[i] = v[i];}
for(;i<nums.size();i++){nums[i] =0;}


// for(int i=0; i<nums.size(); i++){cout<<nums[i]<<endl;}

}

int main()
{
    vector<int> nums{0, 1, 0, 3, 12};

    moveZeroes(nums);

    return 0;
}