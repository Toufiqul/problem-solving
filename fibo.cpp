#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==1 || n==0)return n;                   //cant do n==1 || n==2 because for n=2 n-1=0 so call fibo(n-2) 
    else return (fibo(n-1)+(n-2));              //has segmentfault 
}


// int main(){

//     int n;
//     cin>>n;
//     cout<<fib(n);

//     return 0;
// }

int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fibo(i);
      i++;
   }
   return 0;
}