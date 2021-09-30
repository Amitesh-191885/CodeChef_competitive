#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n,k,i;
	    cin>>n>>k;
	    
	    if( n == 1 && k == 0){
	        cout<<"-1\n";
	    }
	    else if(n==1 && k==1){
	        cout<<"1\n";
	    }
	    else if(k == (n-1)){
	        cout<<"-1\n";
	    }
	    else{
	        for(i=1;i<=k;i++){cout<<i<<" ";}
	        for(i = k+1;i<n;i++){cout<<(i+1)<<" ";}
	        if(k!=n){
	            cout<<(k+1)<<"\n";
	        }
	        else{
	            cout<<endl;
	        }
	        
	    }
	}
	return 0;
}