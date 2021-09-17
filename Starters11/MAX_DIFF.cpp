#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  long long n,sum;
  cin>>t;
  while(t--){
    cin>>n>>sum;
    if(sum<=n){
      cout<<sum<<"\n";
      continue;
    }
    cout<<(2*n-sum)<<"\n";
  }
  return 0;
}