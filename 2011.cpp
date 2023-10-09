class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int count=0;
       int n=operations.size();
        for(auto i:operations){
           /* if(i=="X++"||i=="++X"){
                count++;
            }
           else 
            {
                count--;
            }*/
            if(i[1]=='-')
                count--;
                else
                count++;
            
        }
        return count;
    }

};
