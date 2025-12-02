int minimumOperations(int* nums, int numsSize) {
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 3 == 1){
            (nums[i])--;
            count++;
        }
        else if(nums[i] % 3 == 2){
            (nums[i])++;
            count++;
        }
    }
    return count;
}
