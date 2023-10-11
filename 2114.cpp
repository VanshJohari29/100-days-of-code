class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(auto i :sentences){
            int sum = 0;
            for(auto s : i){
                if(s==' '){
                    sum++;
                }
            }
            ans=max(ans,sum+1);
        }
        return ans;
    }
};
