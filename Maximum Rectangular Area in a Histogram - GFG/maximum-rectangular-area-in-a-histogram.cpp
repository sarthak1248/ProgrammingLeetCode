// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
      vector<long long> left;
      stack<pair<long long , long long >> sl;
      int l=-1;
      
      for(long long i=0;i<n;i++){
          if(sl.size()==0){
              left.push_back(l);
          }
          else if (sl.size()>0 && sl.top().first<arr[i]){
              left.push_back(sl.top().second);
          }
          else if(sl.size()>0 && sl.top().first>=arr[i]){
              while(sl.size()>0 && sl.top().first>=arr[i]){
                  sl.pop();
              }
              if(sl.size()==0){
                  left.push_back(l);
              }
              else{
                  left.push_back(sl.top().second);
              }
          }
          sl.push({arr[i],i});
      }
       while(!sl.empty())
           sl.pop();
       
       
       
       
       int r= n;
             vector<long long> right;

         for(long long  i=n-1;i>=0;i--){
          if(sl.size()==0){
              right.push_back(r);
          }
          else if (sl.size()>0 && sl.top().first<arr[i]){
              right.push_back(sl.top().second);
          }
          else if(sl.size()>0 && sl.top().first>=arr[i]){
              while(sl.size()>0 && sl.top().first>=arr[i]){
                  sl.pop();
              }
              if(sl.size()==0){
                  right.push_back(r);
              }
              else{
                  right.push_back(sl.top().second);
              }
          }
          sl.push({arr[i],i});
      }
             reverse(right.begin(),right.end());

      long long ans=0;
      for(long long i=0;i<n;i++){
right[i]=right[i]-left[i]-1;
      }
      for(long long  i=0;i<n;i++){
          right[i]=arr[i]*right[i];
      }
      for(long long i=0;i<n;i++){
          if(right[i]>ans){
              ans=right[i];
          }
      }
       return ans;
       
        // Your code here
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends