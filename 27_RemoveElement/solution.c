int removeElement(int* nums, int numsSize, int val) {
    int j = numsSize - 1;
    int k = numsSize;
    for(int i = 0; i < k; i++){
        while(nums[i] == val & i <= j){
            k--;
            if(nums[j] != val){
                nums[i] = nums[j];
                j--;
            } else {
                j--;
            }
        }
    }
    return k;
}
