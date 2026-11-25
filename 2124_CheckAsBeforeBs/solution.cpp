class Solution {
public:
    bool checkString(string s) {
        bool found = false;
        for(size_t i = 0; i < s.size(); i++){
            if(!found && s[i] == 'a') continue;
            if(s[i] == 'b' && !found) found = true;
            if(found && s[i] == 'a') return false;
        }
        return true;
    }
};
