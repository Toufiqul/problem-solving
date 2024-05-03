#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=0,a=0,b=0;
    string s="";
    vector<string>l;
    vector<string>p;
    vector<string> :: iterator j = p.end();
    vector<string> :: iterator k = p.end();

    for(int i =0;i<n;i++){
        cin>>s;
        l.push_back(s);
    }

    cin>>n;
    for(int i =0;i<n;i++){
        cin>>s>>a>>b;
        if(s == "add"){
            for(int i =0;i<b;i++)p.push_back(l[a-1]);
            }
        else if(s=="delete"){
            while(b){
                j = find(p.begin(),p.end(),l[a-1]);
                if( j != p.end()){
                    p.erase(j);
                    b--;
                }
                else break;
            }
        }
        else if(s == "count"){
            sort(p.begin(),p.end());
            j = find(p.begin(),p.end(),l[a-1]);
            k = find(p.begin(),p.end(),l[b-1]);
            int cnt =1;
            while(k!=j){
                cnt++;
                j++;
            }
            cout<<cnt<<endl;


        }
    }

    return 0;
}