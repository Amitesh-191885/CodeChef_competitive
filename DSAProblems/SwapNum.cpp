#include<iostream>
using namespace std;

int main(){
  //without using any extra variable
  int a = 2;
  int b = 3;
  cout<<"Before Swap. \n";
  cout<<a<<" "<<b<<"\n";
  cout<<"After Swap. \n";
  a = a^b;
  b = a^b;
  a = a^b;
  cout<<a<<" "<<b;

  /* You can swap any number of variables using '^'. 
  If you have to swap 3 different variables just do
  num1 = num1^num2^num3;
  num2 = num1^num2^num3;
  num3 = num1^num2^num3;
  num1 = num1^num2^num3;
  */
  return 0;
}