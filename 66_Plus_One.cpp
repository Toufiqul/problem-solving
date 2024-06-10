#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{

    reverse(digits.begin(), digits.end());
    int carry = 1;
    for (int i = 0; i < digits.size() && carry != 0; i++)
    {
        if (digits[i] + 1 == 10)
        {
            digits[i] = 0;
            carry = 1;
        }
        else
        {
            digits[i] += carry;
            carry = 0;
        }
    }

    if (carry == 1)
        digits.push_back(1);
    reverse(digits.begin(), digits.end());
    return digits;
}
vector<int> plusOne2(vector<int> &digits)
{

    int carry = 1;
    for (int i = digits.size() - 1; i >= 0 && carry != 0; i--)
    {
        if (digits[i] + 1 == 10)
        {
            digits[i] = 0;
            carry = 1;
        }
        else
        {
            digits[i] += carry;
            carry = 0;
        }
    }

    if (carry == 1)
    {
        digits[0] = 1;
        digits.push_back(0);
    }
    // for(int  i =0 ;i < digits.size(); i++)cout<<digits[i]<<" ";
    return digits;
}

int main()
{
    vector<int> digits = {0};

    plusOne2(digits);

    return 0;
}