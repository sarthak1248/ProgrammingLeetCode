class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1= version1.length();
        int n2= version2.length();
        int i=0,j=0;
        int c1=0,c2=0;
        while(i<n1||j<n2){
            while(i<n1 && version1[i]!='.'){
                 c1 = c1*10 + (version1[i]-'0');
                i++;
            }
             while(j<n2 && version2[j]!='.'){
                 c2 = c2*10 + (version2[j]-'0');
                j++;
            }
            if(c1>c2){
                return 1;
            }
            if(c2>c1){
                return -1;
            }
            c1=0,c2=0;
            i++;
            j++;
        }
    return 0;
        
    
    }
};