class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int total = (size(nums) * (size(nums))/2;
        for(int i = 0; i < size(nums); i++){
            sum += nums[i];
        }
        return total - sum;
    }
};
