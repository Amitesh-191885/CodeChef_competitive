// #Obtain the Sum.
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  long long Num,sum;
  while (t--){
    cin>>Num>>sum;
    long long totalSumOfArray = (Num*(Num+1))/2;
    long long Difference = totalSumOfArray - sum;
    if(Difference >=1 && Difference<=Num){
      cout<<Difference<<"\n";
    }
    else{
      cout<<"-1"<<"\n";
    }
  }
  return 0;
}