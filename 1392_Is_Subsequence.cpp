#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int i = 0, j = 0;
    while (j < t.size())
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if (i >= s.size())
        return true;
    else
        return false;
}

int main()
{

    // string s = "abc", t = "ahbgdc";
    string s = "axc", t = "ahbgdc";

    cout << isSubsequence(s, t) << endl;

    return 0;
}
