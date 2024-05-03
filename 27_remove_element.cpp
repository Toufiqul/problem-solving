#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    vector<int> ans;
    int k =0;

    for(int i = 0; i< size(nums); i ++){
        if(nums[i]!=val){
            ans.push_back(nums[i]);
            k++;
        }

    }

    nums.assign(ans.begin(),ans.end());
//         for(int i = 0; i< size(nums); i ++){
// cout<<nums[i]<<endl;
//         }

    return k;
}

int main(){
    
    int val=3;
    vector <int> v{3,2,2,3};
    cout<<removeElement(v,3)<<endl;

    return 0;
}