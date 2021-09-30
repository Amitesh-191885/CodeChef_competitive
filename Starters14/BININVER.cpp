#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    int ans =INT32_MAX;
	    for(int i=0;i<n;i++){
	        int val = arr[i];
	        int count = 0;
	        while(val%2 == 0){
	            val = val/2;
	            count++;
	        }
	        ans = min(ans,count);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
