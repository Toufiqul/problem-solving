#include<bits/stdc++.h>

using namespace std;

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size(),m =0;
// cout<<s<<endl;
        if(!flowerbed[1] && !flowerbed[0])n--;
        if(s>2 && !flowerbed[s-2] && !flowerbed[s-1])n--;
        // cout<<n<<endl;
        for(int i =1;i<s-1; i++){
            if(!flowerbed[i] && !flowerbed[i-1] && !flowerbed[i+1]){
                n--;
                flowerbed[i]=1;
            }
        }

        return n<=0?true:false;
    }

int main(){
    vector<int> f{1};
    int n = 0;
    cout<<canPlaceFlowers(f,n);
    return 0;
}

