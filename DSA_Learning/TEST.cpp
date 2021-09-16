/* Problem Name: "Life, the Universe, and Everything".
Stop processing input after reading in the number 42.
For Ex:-
intput:
1
2
88
42
99
Output:
1
2
88
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    if(n!=42){ //Take input and check for output.
      cout<<n<<"\n";
    }
    else{
      break; //Stop taking input when reach n 42.
    }
  }
  return 0;
}