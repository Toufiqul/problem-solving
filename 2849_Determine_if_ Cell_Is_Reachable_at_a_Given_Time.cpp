#include<bits/stdc++.h>
using namespace std;

bool isReachableAtTime(int sx, int sy, int fx, int fy, int t){
    int dx= abs(sx-fx);
    int dy = abs(sy-fy);
    int l = dx;
    if (l<dy) l=dy;

    if(sx==fx && sy==fy && t==1)return false;
    else if(l<=t)return true;
    else return false;

}

int main(){

    cout<<isReachableAtTime(2,4,7,7,6)<<endl;

    return 0;
}