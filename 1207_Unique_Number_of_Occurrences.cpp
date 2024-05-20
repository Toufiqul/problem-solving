#include<bits/stdc++.h>

using namespace std;


bool uniqueOccurrences(vector<int>& arr) {
    map<int,int> m;
    for(int i=0;i<arr.size();i++){
        if(m[arr[i]]){m[arr[i]]++;}
        else{m[arr[i]]=1;}
    }
    int cnt = m[arr[0]];

    // for(int i= 0;i<arr.size();i++){
    //     if(m[arr[i]]!=cnt){
    //         return false;
    //     }
    // }
    for(auto i : m){
        for(auto j : m){
            if(i.second==j.second && i!=j)return false;
        }
    }
    return true;

}

int main(){

    vector<int> arr={-3,0,1,-3,1,1,1,-3,10,0};
    
    cout<<uniqueOccurrences(arr);

    return 0;
}