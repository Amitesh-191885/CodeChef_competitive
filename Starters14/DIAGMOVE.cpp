#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x,y;
	    cin>>x>>y;
	    
	    if(abs(x) == abs(y)){
	        cout<<"YES\n";
	    }
	    else if((abs(x)-abs(y))%2==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    
	}
	return 0;
}
