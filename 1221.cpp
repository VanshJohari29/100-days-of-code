class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,countL=0,countR=0;
        for(auto i : s){
            if(i=='L'){
                countL++;
            }
            else{
                countR++;
            }
            if(countR==countL){
                ans++;
            }

        }
        return ans++;
    }
};
