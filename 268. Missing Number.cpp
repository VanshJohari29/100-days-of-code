class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        unordered_set <int> s;
        for(auto i : nums){
            s.insert(i);
        }
        int ans ;
        for(int i=0;i<=n;i++){
            if(s.find(i)==s.end()){
                 ans = i;
            }

        }
        return ans;
    }
};
