class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans ;
        int count = 0;
     int l = s.length();
     for(int i=0;i<l;i++)
     {
   if(s[i]==' '){
       count++;
   }
       if(count==k){
          break;
       }

   ans.push_back(s[i]);
     }
      return ans;
    }
};



