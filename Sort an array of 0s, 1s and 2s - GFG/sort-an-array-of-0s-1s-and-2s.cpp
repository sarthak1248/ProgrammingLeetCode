// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int left=0;
        int right=n-1;
        int mid=0;
        while(mid<=right){
            if(arr[mid]==0){
                swap(arr[left],arr[mid]);
                left++;
                mid++;
                
            }
            else if(arr[mid]==2){
                swap(arr[mid],arr[right]);
                right--;
            }
            else{
                mid++;
            }
        }
        return;
        // coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends