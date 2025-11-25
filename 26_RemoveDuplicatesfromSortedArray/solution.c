int removeDuplicates(int* nums, int numsSize) {
    int* lastUnique = nums;
    int k = 1;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != *lastUnique){
            lastUnique++;
            *lastUnique = nums[i];
            k++;
        }
    }
    return k;
}
