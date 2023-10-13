lass Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(auto i : s) {
            i = tolower(i);
            if (isalpha(i) || isdigit(i)) {
                
                t += i;
            }
        }
        string p = t;
        reverse(t.begin(), t.end());
        if (t == p) {
            return true;
        }
        return false;
    }
};
