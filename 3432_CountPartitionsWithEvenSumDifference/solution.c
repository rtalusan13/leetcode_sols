int countPartitions(int* nums, int numsSize) {
    int rightsum = 0;
    int leftsum = 0;
    int partitions = 0;
    for(int i = 0; i < numsSize; i++){
        rightsum += nums[i];
    }
    for(int i = 0; i < numsSize - 1; i++){
        leftsum += nums[i];
        rightsum -= nums[i];
        if((leftsum - rightsum) % 2 == 0){
            partitions++;
        }
    }
    return partitions;
}
