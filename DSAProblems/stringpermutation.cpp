#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void Permutation(string str);

int main(){
  string str = "ABC"; //either you can assign or cin the str value using cin.
  
  Permutation(str);
  return 0;
}

void Permutation(string str){
  int n = str.length();
  if(n==0){return;}
  
  if(n==1){cout<<str; return;}

  sort(str.begin(),str.end());
  while (1)
  {
    /* code */
    cout<<str<<" ";
    int i = n-1;
    while (str[i-1]>=str[i])
    {
      /* code */
      if(i-- == 0){
        return;
      }
    }

    int j= n-1;
    while (j>i && str[j]<=str[i-1])
    {
      /* code */
      j--;
    }
    swap(str[i-1],str[j]);
    reverse(str.begin()+i,str.end());    
  }
  
}