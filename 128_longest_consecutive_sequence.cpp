#include<bits/stdc++.h>
using namespace std;

int longestSeq(vector<int>& nums){
    int cnt=-1,temp=1;

    if (size(nums)==0) return 0;
    sort(nums.begin(),nums.end());
    // for(int i =0;i<nums.size();i++){cout<<nums[i] <<" ";}
    // nums.push_back(-2);
    for(int i =0;i<nums.size() - 1;i++){
    
        if(nums[i]==nums[i+1]){
            continue;
        }else if(nums[i]+1==nums[i+1]){
            temp++;
            if(temp>cnt){
            
            cnt=temp;
            temp=1;
            // cout<<temp<<" ";
            }
        }
        // else if(temp>cnt){
        //     cnt=temp;
        //     temp=1;
        // }
        // else{
        //     temp =1;
        // }
        
    }
    // if(cnt == -1)cnt = temp;
    return cnt;
}

int main(){
    vector<int> v{0,3,7,2,5,8,4,6,0,1};
    cout<<longestSeq(v)<<endl;
    return 0;
}