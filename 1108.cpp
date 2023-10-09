class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto i : address){
            if(i=='.') ans+="[.]";
            else ans+=i;
        }    
    return ans;
   /* string ans;
    int i=0;
    while(i<address.length()){
        if(address[i]=='.'){
            ans+="[.]";
        }
        else{
            ans+=address[i];
        }
        i++;
    }
    return ans;*/
    }
};
