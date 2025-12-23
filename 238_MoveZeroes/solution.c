void moveZeroes(int* nums, int numsSize) {
    if(nums == NULL){
        return;
    }
    int* lz = nums;
    int zc = 0;
    for (int i = 0; i < numsSize; i++){
        if(nums[i] == 0){
            zc++;
        }
        else{
            *lz = nums[i];
            lz++;
        }
    }
    for (int i = 0; i < zc; i++){
        *lz = 0;
        lz++;
    }
    return;
}
