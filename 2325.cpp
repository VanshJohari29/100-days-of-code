class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char sec = 'a';
        for(char first : key){
            if(first != ' ' && mp.find(first)==mp.end())
            {
                mp.insert({first,sec++});
            }
        }
        string ans ="";
        for(char i : message){
            if(i != ' ')
            ans+=mp[i]; //we r going in message and putting the char in ans which is in index of i
            else
            ans+=' ';
        }
        return ans;
    }
};
