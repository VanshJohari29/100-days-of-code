class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int fp = nums[0]*nums[1];
        int lp = nums[nums.size()-1] * nums[nums.size()-2];
        return lp -  fp ;
    }
};
