class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && count==0)
                count++;
            else if(s[i]=='(' && count>=1){
                ans+=s[i];
                count++;
            }   
            else if(s[i]==')' && count>1){
                ans+=s[i];
                count--;
            }
            else if(s[i]==')' && count==1)
                count--;
        }
        return ans;
    }
};
//This question is all about the counter. As the very first bracket would start from 0 and thus that will not be included and the last outermost bracket with value 0 will also be not included.

// In this way we will check whether the char should be added into the string or not.
// Add 1 if there is '(' open parenthesis. and sub 1 if ')' clsed paranthesis.
