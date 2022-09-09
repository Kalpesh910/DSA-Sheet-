//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
	public:
	
	string digitsNum(int N)
	{
	    // Code here.
	    string ans="";
	    int x=N%9;
	    if(x!=0){
	        ans += to_string(x);
	    }
	    int y=N/9;
	    while(y--){
	        ans += '9';
	    }
	    int z=N;
	    while(N--){
	        ans+='0';
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		string ans = ob.digitsNum(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
