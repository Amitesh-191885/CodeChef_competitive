/*
Problem Name: " Reverse The Number: Given an Integer N, write a program to reverse it."
Example:
Input:
  4
  12345
  31203
  2123
  2300 
Output:
  54321
  30213
  3212
  32
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; //For testcases;
  cin>>t;
  long long n,reverseNumber =0;
  while(t--){
    cin>>n;
    while(n){
      reverseNumber = reverseNumber*10 + n%10; //creating and assign reverse number.
      n=n/10; //for next lastdigit.
    }
    cout<<reverseNumber<<"\n";
    reverseNumber=0; //For another testcase.
  }
  return 0;
}