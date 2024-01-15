#include <bits/stdc++.h>
using namespace std;

int oddSum(int n)
{
    int s = 0, r = 0;
    if (n == 0)
        return 0;
    else
    {
        r = n % 10;
        if (r % 2 != 0)
            s = s + r;
        n = n / 10;
        
        return s + oddSum(n);
    }
}

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
