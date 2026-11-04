class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> retVec = {};
        for(int i = 0; i < m; i++){
            string append = "";
            if(i == 0){
                for(int j = 0; j < n; j++){
                    append += ".";
                }
            } else {
                for(int j = 0; j < n-1; j++){
                    append += "#";
                }
                append += ".";
            }
            retVec.push_back(append);
        }
        return retVec;
    }
};
