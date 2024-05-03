// code i submitted to leetcode
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    string ans="";
    if(n==0)cout<<0<<endl;
    else if(n==1)cout<<strs[0]<<endl;
    else{

        sort(strs.begin(),strs.end());
        string a = strs[0],b=strs[n-1];
        int siz = min(a.size(),b.size());
        for(int i =0;i<siz;i++){
            if(a[i]==b[i])ans=ans+a[i];
            else break;
        }

    }
    return ans;
    }

int main(){

    vector<string> v{"a"};    

    cout<<longestCommonPrefix(v)<<endl;

    return 0;
}