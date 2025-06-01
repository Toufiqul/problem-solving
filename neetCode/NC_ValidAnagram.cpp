#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.size() == 0 || t.size() == 0 || s.size() != t.size())
    {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            return false;
    }
    return true;
}
int main()
{
    string s = "jam", t = "jar";

    cout << isAnagram(s, t) << endl;
    return 0;
}