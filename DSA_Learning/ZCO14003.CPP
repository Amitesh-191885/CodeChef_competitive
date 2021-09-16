/*
  Problem Name: Smart Phone.
  Problem Code: ZCO14003
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
  int N; //This is Number of Potencial customer.
  cin>>N;
  long long temp;
  vector<long long> Budgets; // Customer's Budgets.
  for (int i = 0; i < N; i++){
    cin>>temp;
    Budgets.push_back(temp);
  }

  /* First sort the budget in ascending order
     So that we can calculate maxmimum customer can buy 
     that product and we have maximum revenue.
  */
  sort(Budgets.begin(),Budgets.end());

  long long MaxRevenue=0;

  for(int i=0;i<N;i++){
    MaxRevenue = max(MaxRevenue,Budgets[i]*(N-i));
  }
  cout<<MaxRevenue;
  return 0;
}