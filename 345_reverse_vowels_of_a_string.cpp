#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{

    string vow = "aeiouAEIOU";
    size_t a[s.size()];
    char c[s.size()];
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (vow.find(s[i]) != string::npos)
        {
            a[idx] = i;
            c[idx] = s[i];
            idx++;
        }
    }
    idx--;
    for (int i = 0; i < s.size(); i++)
    {
        if (vow.find(s[i]) != string::npos)
        {
            s[i] = c[idx];
            cout << idx << endl;
            idx--;
        }
    }
    return s;
}

int main()
{

    string s = "aA";
    cout << reverseVowels(s) << endl;
    return 0;
}