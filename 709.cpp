class Solution {
public:
    string toLowerCase(string s) {
        /*for(auto  &i : s){
            i=tolower(i);
        }
        return s;*/
        
        /* transform(s.begin(),s.end(),s.begin(), ::tolower);
        return s;*/
        string ans;
        for(auto i : s){
            if(i>=65 && i<=90){
                ans+=i+32;
            }
            else{
                ans+=i;
            }
        }
        return ans;
    }
};
