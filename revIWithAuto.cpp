#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abicid", ans;
    // ans = s.substr(0, s.find('i'));
    // cout << ans << endl;
    // reverse(ans.begin(), ans.end());
    int j;
    for (auto i=s.begin(); i != s.end(); i++,j++)
    {
        if (*i == 'i')
        {
            s = s.substr(0, j) + s.substr(j + 1, s.size());
            j--;
            reverse(s.begin(),i);
            // cout << "s: " << s << endl;
            // ans = s.substr(0, i + 1);
            // reverse(ans.begin(), ans.end());
            // cout << "ans: " << ans << endl;
        }
    }
    // reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}