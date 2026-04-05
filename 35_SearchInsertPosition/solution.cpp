class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        size_t left = 0;
        size_t right = nums.size();
        while(left < right){
            size_t m = left + (right-left)/2;
            if(nums[m] == target){
                return m;
            } else if(nums[m] < target){
                left = m+1;
            } else {
                right = m;
            }
        }
        return right;
    }
};
