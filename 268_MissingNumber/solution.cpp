class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int total = 0;
        for(int i = 0; i < size(nums); i++){
            sum += nums[i];
            total = total + 1 + i;
        }
        return total - sum;
    }
};
