#include<bits/stdc++.h>
using namespace std;

int sum_odd_digits(int n)
{
  int s=0,r=0;
  if(n==0)
    return 0;
  r = n%10;
  if(r%2==1)
  s = s+r;
  n=n/10;
  
  return s+ sum_odd_digits(n);
}

int main(){

    cout<<sum_odd_digits(132)<<endl;

    return 0;
}