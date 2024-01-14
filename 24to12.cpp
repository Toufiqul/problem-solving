#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    string inputString = "24:32";
    int h, m;
    string ampm = "am", ans = "hour:min am/pm ";
    size_t position = inputString.find(':');

    if (position != string::npos)
    {
        string part1 = inputString.substr(0, position);
        string min = inputString.substr(position + 1);
        stringstream ss;
        ss << part1;
        ss >> h;
        ss.clear();

        if (h == 24)
        {
            ampm = "am";
            h = 0;
        }
        else if (h == 12)
        {
            ampm = "pm";
        }
        else if (h > 12)
        {
            h = h % 12;
            ampm = "pm";
        }
        if (h == 0)
            ans.append("0");
        ans.append(to_string(h) + ":" + min + " " + ampm);

        cout << ans << endl;
    }
    else
    {
        cout << "No ':' found in the input string." << endl;
    }

    return 0;
}
