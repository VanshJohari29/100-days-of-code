class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        /*int count=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    count+=1;
                }
                else 
                {
                   count+=0;
                }
            }
        }
        return count;*/
        unordered_map<char, bool> ans;
        for(int i=0; i<jewels.length(); i++){
            ans[jewels[i]] = true;
        }
        int count = 0;
        for(int i=0; i<stones.length(); i++){
            if(ans[stones[i]])
                count++;
        }
        return count;
    }
};
