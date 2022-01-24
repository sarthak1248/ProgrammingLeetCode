class Solution {
public:
    bool detectCapitalUse(string word) {
                if(word.length() < 2) return true;// either if word is empty or word is just 1 character long, then it's always valid
        // isupper OR islower is built in function in C++, but all the language have but available in different syntax
        // but if you don't want to use you can write word[0] >= 'A' ASCII value && word[1] <= 'Z'
        if(isupper(word[0]) && isupper(word[1])){ // creating our 1st condition, from 3rd onward everything should be capital
            for(int i = 2; i < word.length(); i++){
                if(islower(word[i])) return false;
            }
        }
        else{ // creating our 2nd condition, from 2nd onward everything should be small
            for(int i = 1; i < word.length(); i++){
                if(isupper(word[i])) return false;
            }
        }
        return true;

    } 
};