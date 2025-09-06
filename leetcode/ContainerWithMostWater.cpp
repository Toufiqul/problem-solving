#include <bits/stdc++.h>
using namespace std;

int maxAreaTLE(vector<int> &height)
{

    int maxAr = -1;
    int minHeight = INT_MIN;
    for (int i = 0; i < height.size(); i++)
    {
        if (height[i] < minHeight)
            continue;
        // cout << "in the first loop" << endl;
        for (int j = i + 1; j < height.size() && i < height.size(); j++)
        {
            // cout << "in the second loop " << maxAr << endl;
            if ((j - i) * min(height[i], height[j]) > maxAr)
                maxAr = (j - i) * min(height[i], height[j]);
            minHeight = min(height[i], height[j]);
        }
    }
    return maxAr;
}

int maxArea(vector<int> &height)
{
    // two pointers move the one whose value is lower.if (height[l] < height[r]) l++;else if (height[r] <= height[l])r--;
    int l = 0, r = height.size() - 1;
    int area = 0;
    while (l != r)
    {
        // cout << "area " << area << ", l: " << l << ", r:" << r << endl;
        if ((r - l) * min(height[l], height[r]) > area)
            area = (r - l) * min(height[l], height[r]);
        if (height[l] < height[r])
            l++;
        else if (height[r] <= height[l])
            r--;
    }
    return area;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // vector<int> height = {8, 7, 2, 1};
    cout << maxArea(height) << endl;
    // cout << height.size();
    return 0;
}