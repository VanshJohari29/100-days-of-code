class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         vector<int>v;
         vector<int>v1;
         for(int i:nums){
             if(i%2==0){
                 v.push_back(i);
                 nums.pop_back();
             }else{
                 v1.push_back(i);
                 nums.pop_back();
             }
         }
          for (int i=0; i<v.size(); i++)  
              nums.push_back(v[i]); 
               for (int i=0; i<v1.size(); i++)  
                   nums.push_back(v1[i]); 
         return nums;
     }
};
