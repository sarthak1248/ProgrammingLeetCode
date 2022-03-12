// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

void solve(int n,int ones,int zeros,vector<string> &op,string ip){
    if(n==0){
        op.push_back(ip);
        return;
    }
    string op1=ip;
    op1.push_back('1');
    solve(n-1,ones+1,zeros,op,op1);
    if(ones>zeros){
        string op2=ip;
        op2.push_back('0');
        solve(n-1,ones,zeros+1,op,op2);
    }
    
}
	vector<string> NBitBinary(int N)
	{ int n=N;
	    int ones=0;
	    int zeros=0;
	   vector<string> op;
	   string ip="";
	   solve( n,ones,zeros,op,ip);
	   return op;
	    // Your code goes here
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends