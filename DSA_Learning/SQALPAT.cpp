/*
You're given a number N=6. Print the first N lines of the below-given pattern.
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
30 29 28 27 26
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,Odditrator=1,Evenitrator=10,temp;
  cin>>n;
  for(int i=1;i<=n;i++){
    if(i%2!=0){
      temp = Odditrator;
      for(int j=1;j<=5;j++){
        cout<<Odditrator<<" ";
        Odditrator++;
      }
      Odditrator = temp + 10;
      cout<<"\n";
    }
    else{
      temp = Evenitrator;
      for(int j=1;j<=5;j++){
        cout<<Evenitrator<<" ";
        Evenitrator--;
      }
     cout<<"\n";
      Evenitrator = temp+10;
    }
  }
  return 0;
}