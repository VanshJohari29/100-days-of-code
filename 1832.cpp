class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(char i : sentence){
            s.insert(i);
        }
        return s.size()==26;
    }
};
