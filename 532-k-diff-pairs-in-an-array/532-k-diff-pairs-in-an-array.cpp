class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        int n = arr.size(); // take the size of the array
        unordered_map<int, int> mp; // map to store all values of array
        
        for(int i = 0; i < n; i++) //store all values of array into map
        {
            mp[arr[i]]++;
        }
        
        int count = 0; // variable to store the unique pairs
        
        if(k != 0) // if k is not zero
        {
            for(auto it = mp.begin(); it != mp.end(); it++) // traverse in all over the map
            {
                // if value + k is present in map
                if(mp.find(it -> first + k) != mp.end())
                {
                    count++; // increment count
                }
            }
        }
        else // see for k = 0, we have to just find all the values greater than 1
        {
            for(auto it = mp.begin(); it != mp.end(); it++)
            {
                if(it -> second > 1)
                {
                    count++;
                }
            }
        }
        
        return count; // at last return count
    }
    
};