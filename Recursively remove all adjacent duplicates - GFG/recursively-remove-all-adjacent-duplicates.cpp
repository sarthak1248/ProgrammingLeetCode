// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string helper(string s){
        int i = 0;
        while(s[i] != '\0'){
            char c = s[i];
            bool flg = false;
            //cout << s << " " << i << "\n";
            while(s[i+1] != '\0' && s[i] == s[i+1] && s[i] == c){
                s.erase(i, 2);
                flg = true;
            }
            if(c == s[i] && flg)
                s.erase(i, 1);
            if(!flg)
                i++;
        }
        return s;
    }
    string remove(string s){
        int n = s.size();
        s = helper(s);
        while(n != s.size()){
            n = s.size();
            s = helper(s);
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends