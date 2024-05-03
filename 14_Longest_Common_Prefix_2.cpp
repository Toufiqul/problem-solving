// didnt workout. debug if you get the time


#include<bits/stdc++.h>
using namespace std;
int cmp(string s, string t){
    int n =min(s.size(),t.size()),cnt = 0,i;
    
    for(i =0; i<n;i++){
        if(s[i]!=t[i])cnt = i;
    }
    return i-1;
}

string strSubtract(string s, int n){
    string sub = "";
    for(int i =0 ; i<n ; i++){
        sub = sub + s[i];
    }
    return sub;
}

int main(){
    vector<string> strs{"geeksforgeeks", "geeks", 
                           "geek", "geezer"};
    // vector<string> strs{"geek", "geezer"};
    string s=strs[0];
    int n=strs.size() , j;
    if(n == 1){s = strs[0];}
    else{
    for(auto i = strs.begin()+1; i != strs.end() ; i++){
        j=cmp(s,*i);
        cout<<"j: "<<j<<endl;

        s=strSubtract(s,j);
        cout<<s<<endl;
    }
    }


cout<<s;

    return 0;
}