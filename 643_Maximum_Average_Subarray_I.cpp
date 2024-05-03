#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double avg = 0,window = 0, ksum = 0;
    for(int i = 0; i < k; i++) {ksum = ksum + nums[i];}
    avg = ksum/k;   
    // cout<<nums.size()<<endl;
    for(int i = k; i < nums.size(); i++){
        ksum = ksum + nums[i] - nums[i-k];
        avg = max(avg,ksum/k);
        cout<<ksum<<endl;
    }
    return avg;
}

int main(){
    vector<int> nums = {5};
    int k = 1;
    cout<<findMaxAverage(nums,k)<<endl;
    return 0;
}