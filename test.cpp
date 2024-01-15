#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l = 0, r = 0;
    string s = "abicidi", ans;
    for (r; r < s.size(); r++)
    {
        if (s[r] == 'i')
        {
            cout << l << " " << r << endl;
            ans = ans + s.substr(l, r);
            cout << s.substr(l, r) << endl;
            l = r + 1;
        }
    }

    cout << ans << s.size() << endl;

    return 0;
}
