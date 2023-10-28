class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()>2){
        for(int i=0;i<nums.size();i++){
            return nums[i+1];
        }
        }
        return -1;

    }
};
