#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> nums){
    vector<int>unique;
    unique.push_back(nums[0]);
    for(int i=1;i<size(nums);i++){
        if(nums[i]!=unique.back())unique.push_back(nums[i]);
    }

    nums.assign(unique.begin(),unique.end());

    return size(unique);
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout<<removeDuplicates(nums)<<endl;

    return 0;
}