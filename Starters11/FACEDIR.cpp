#include<bits/stdc++.h>

using namespace std;

int main(){
  int t,X;
  cin>>t;
  while (t--){
    cin>>X;
    if(X%4 == 0){
      cout<<"North \n";
    }
    else if(X%4 == 1){
      cout<<"East \n";
    }
    else if(X%4 == 2){
      cout<<"South \n";
    }
    else if(X%4 == 3){
      cout<<"West \n";
    }
  }
  return 0;
}