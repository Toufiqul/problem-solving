#include <bits/stdc++.h>
// #include <cstdlib>
using namespace std;

int main()
{
    string inputString = "00:32";
    int h, m;
    string ampm = "am", ans = "hour:min am/pm ";
    size_t position = inputString.find(':');

        string part1 = inputString.substr(0, position);
        string min = inputString.substr(position + 1);
        stringstream ss;
        ss << part1;
        ss >> h;
        ss.clear();
        if(h>11){ampm = "pm";}
        h=h%12;
        if(h==0){h=12;}
        if (h < 10)
            ans.append("0");
        ans.append(to_string(h) + ":" + min + " " + ampm);

        cout << ans << endl;

    return 0;
}
