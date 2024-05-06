#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        vector<int> r; 
        int n = nums.size();
            k=k%n;
        if(k>n){
            return;
        }

        for(int i = n-k; i < nums.size(); i++) {
            r.push_back(nums[i]);
        }
        for(int i = 0; i < n-k; i++){
            r.push_back(nums[i]);
        }
        nums = r;

        for(int i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
        }
    }


int main(){
    // vector<int>nums = {1,2,3,4,5,6,7};
    // int k = 3;
    //     vector<int>nums = {-1,-100,3,99};
    // int k = 2;
            vector<int>nums = {-1};
    int k = 2;

    rotate(nums, k);

    return 0;
}