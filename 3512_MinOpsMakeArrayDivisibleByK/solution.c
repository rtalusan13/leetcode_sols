/* While it is recommended that you decrement a specific entry of the array, it is clearly not necessary to use the array after getting a total sum. */

int minOperations(int* nums, int numsSize, int k) {
    int sum = 0;
    int val = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    if(sum % k == 0){
        val = 0;
    }
    else{
        while(sum % k != 0){
            val++;
            sum--;
        }
    }
    return val;
}
