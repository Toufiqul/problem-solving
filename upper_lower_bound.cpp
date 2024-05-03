#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[]={1,4,4,4,4,9,9,10,11};
    vector<int> b{1,4,4,4,4,9,9,10,11};
    int n = sizeof(a)/sizeof(int);
    int x=4;
    // find first occurance of x
    int i = lower_bound(a,a+n,x) - a;
    if(i!=n && a[i]==x)cout<<i<<endl;
    else cout<<-1<<endl;

    //find next larger element to x
    int j = upper_bound(b.begin(),b.end(),x)-b.begin();
    if(j>=0 && j!=b.size() && b[j-1]==x)cout<<j<<endl;
    else cout<<-1<<endl;

    if(i>0){
        cout<<a[i-1]<<endl;
        // cout<<*(j-1)<<endl;
    }else cout<<-1<<endl;

    return 0;
}