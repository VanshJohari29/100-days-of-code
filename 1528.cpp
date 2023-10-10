class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      /*  string str = s;// We create a new string str with the same content as the input string s

        for(int i = 0 ; i < s.length() ; i++){
        str[indices[i]] = s[i]; //copy value of s[i] to new string 'str'at value present at same index of vector indices
        }
        return str;*/
        
        string str=s;
        for(int i=0;i<indices.size();i++)
            str[indices[i]]=s[i];
        return str;  
    }
};
