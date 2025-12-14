class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int search = 0;
        for(int i = 0; i < size(nums); i++){
            search ^= nums[i];
        }
        return search;
}};
