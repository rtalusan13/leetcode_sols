int findFinalValue(int* nums, int numsSize, int original) {
    bool cond = true;
    while(cond){
        cond = false;
        for(int i = 0; i < numsSize; i++){
            if(nums[i] == original){
                original += original;
                cond = true;
            }
        }
    }
    return original;
}
