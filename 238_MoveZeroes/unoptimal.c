void moveZeroes(int* nums, int numsSize) {
    for(int i = 0; i < numsSize-1; i++){
        int j = i+1;
        if(nums[i] == 0){
            while(nums[j] == 0 && j < numsSize-1){
                j++;
            }
            nums[i] = nums[j];
            nums[j] = 0;
        }
    }
}
