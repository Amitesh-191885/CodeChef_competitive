/* Calculate Number of zeros present at the end of given numbers factorials.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; //For Test Cases.
  cin>>t;
  long long N;
  while (t--){
    cin>>N; //Number to calculate factorials count end zeros.
    int i =5,res =0;
/* This loop calculate Number of Zeros present at end such that where Number is multiplied with 2 and 5...
For ex: Given N is if 3 then number of zeros is 0
    explain: 3! = 1x2x3 where no any 2x5 which give zero at the end.
    ex: If N is 5 then 
    5! = 1x2x3x4x5 here one 2x5 is present which gives one zero at the end.
  */
    while(i<=N){
      res = res + N/i;
      i = i*5;
    }
    cout<<res<<"\n";
  }
  
  return 0;
}