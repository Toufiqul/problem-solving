#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abicidi", ans;
    // ans = s.substr(0, s.find('i'));
    // cout << ans << endl;
    // reverse(ans.begin(), ans.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'i')
        {
            s = s.substr(0, i) + s.substr(i + 1, s.size());
            i--;
            reverse(s.begin(), s.begin() + i);
            // cout << "s: " << s << endl;
            // ans = s.substr(0, i + 1);
            // reverse(ans.begin(), ans.end());
            // cout << "ans: " << ans << endl;
        }
    }
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}