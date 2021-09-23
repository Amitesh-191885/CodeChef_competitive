#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    string S;
    cin>>S;
    string str1,str2;
    if((S.size())%2 == 0){
      str1.assign(S,0,(S.size())/2);
      str2.assign(S,((S.size())/2)+1,S.size());
    }else{
      str1.assign(S,0,((S.size())/2)-1);
      str2.assign(S,((S.size())/2)+1,S.size());
    }

    cout<<str1;
    cout<<str2;
  }
  
  return 0;
}