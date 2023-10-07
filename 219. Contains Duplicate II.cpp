class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      int n = nums.size();
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
          auto it = mp.find(nums[i]);
          // storing the value of nums[i] in it
          if(it != mp.end()){
              //it is there in mp then we will chck for condition
              if(abs(i-mp[nums[i]])<=k){
                  return true;
              }
          }
          //if I have not seen this number before, insert the number with its position in the map
            // and if the number is already present in the map, then update the position of that number
          mp[nums[i]] = i;
      }
      //after whole traversal if we dont find a pair to satisfy the condition then return false
      return false;
    }
};
