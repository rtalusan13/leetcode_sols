class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int curr = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                curr += 1;
            } else if(s[i] == ')'){
                curr = (curr == 0) ? 0 : curr-1;
            }
            max = (curr > max) ? curr : max;
        }
        return max;
    }
};
