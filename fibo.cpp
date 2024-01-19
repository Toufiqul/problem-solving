#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==1 || n==0)return n;                   //cant do n==1 || n==2 because for n=2 n-1=0 so call fibo(n-2) 
    else return (fibo(n-1)+(n-2));              //has segmentfault 
}

int term[1000];
// Fibonacci Series using memoized Recursion
int fibM(int n)
{
    // base case
    if (n <= 1)
        return n;
 

    if (term[n] != 0)    // if fib(n) has already been computed we do not do 
    return term[n];      //further recursive calls and hence reduce the number of repeated work
 
    else {
 
        // store the computed value of fib(n)
        // in an array term at index n to
        // so that it does not needs to be
        // precomputed again
        term[n] = fibM(n - 1) + fibM(n - 2);
 
        return term[n];
    }
}

int main() {
   int n , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> n;
   cout << "\nFibonnaci Series : ";
   while(i < n) {
      cout << " " << fibo(i);
      i++;
   }
   cout<<endl;

   cout<<fibM(n);
   
   return 0;
}