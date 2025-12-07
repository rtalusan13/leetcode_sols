class Solution {
  bool hasTrailingZeros(List<int> nums) {
    int ORbin = 0;
    for(int i = 0; i < nums.length; i++){
        if(nums[i] % 2 == 0){
            ORbin++;
        }
        if(ORbin == 2){
            return true;
        }
    }
    return false;
  }
}
