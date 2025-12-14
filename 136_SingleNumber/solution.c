int singleNumber(int* nums, int numsSize) {
    int search = 0;
    for(int i = 0; i < numsSize; i++){
        search ^= nums[i];
    }
    return search;
}
