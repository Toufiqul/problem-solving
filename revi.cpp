#include <bits/stdc++.h>
using namespace std;

int main()
{

   string s = "abicidi",ans;

   for(int i = 0; i <s.size(); i++){
    if(s[i] == 'i'){reverse(ans.begin(),ans.end());}
    else{ans.push_back(s[i]);}
   }

   cout<<ans<<endl;



    return 0;
}