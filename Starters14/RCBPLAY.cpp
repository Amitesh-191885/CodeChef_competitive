#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--){
	    int x=0,y=0,z=0;
	    cin>>x;
			cin>>y;
			cin>>z;
	    int ans = x + (z*2);
	    if(ans>=y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
