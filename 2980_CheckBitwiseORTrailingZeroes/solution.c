bool hasTrailingZeros(int* nums, int numsSize) {
    int ORbin = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 2 == 0){
            ORbin++;
        }
        if(ORbin > 1){
            return true;
        }
    }
    return false;
}
