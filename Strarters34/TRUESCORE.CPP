/*
Input Format:
*> The first line contains a single integer T - the number of test cases. Then the test cases follow.
*> The first line of each test case contains two integers A and B - 
    the inital number of goals team 1 and team 2 have scored respectively.

*> The second line of each test case contains two integers C and D -
    the final number of goals team 1 and team 2 must be able to score respectively.

Output Format:
*> For each testcase, output POSSIBLE if it is possible for the score to become C:D 
    at a later point in the game, IMPOSSIBLE otherwise.
*> You may print each character of POSSIBLE and IMPOSSIBLE in uppercase or lowercase
    (for example, possible, pOSsiBLe, Possible will be considered identical).

*/

#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a <= c & b <= d){
	        cout<<"POSSIBLE\n";
	    }
	    else{
	        cout<<"IMPOSSIBLE\n";
	    }
	}
	    
	return 0;
}