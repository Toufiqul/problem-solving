#include<bits/stdc++.h>
using namespace std;

    int largestAltitude(vector<int>& gain) {
        int maxAltitude =0, altitude =0;
        for (int i=0; i<gain.size(); i++){
            altitude += gain[i];
            // cout<<altitude<<endl;
            maxAltitude = max(maxAltitude, altitude);
        }
        return maxAltitude;
    }



int main(){
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    cout<<largestAltitude(gain);

    return 0;
}