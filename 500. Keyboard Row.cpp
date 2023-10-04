class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        // we put all these elements in sets so that we can find them afterwards
    {
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};    
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        
        vector<string> result;
        
        for(string &word : words){         // same as for(int i=0;i<words.size();++i) and for(auto word : words) to select a particular word from the array.
            int count1=0;
            int count2=0;
            int count3=0;
            int word_len = word.length();
            
            for(char &w : word){           // same as for(int j=0;j<word.length();++j) and for(auto w : word) to access a particular letter of the word selected from array
                char c = tolower(w);
                
                if(row1.find(c) != row1.end())    
                    count1++;
                // it means that find the element in the set . if found count1++ else pass. row1.find(c)!=row1.end() means we found the element before reaching the end of the set
                if(row2.find(c) != row2.end())
                    count2++;
                if(row3.find(c) != row3.end())
                    count3++;
            }
            
            if(count1 == word_len || count2 == word_len || count3 == word_len)  // if anyone of these are true,pushback the word in result.
                result.push_back(word);
        }
        
        return result;
    
    }
};
