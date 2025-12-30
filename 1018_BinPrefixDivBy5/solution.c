/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    bool* arr = malloc(numsSize * sizeof(bool));
    int x = 0;
    *returnSize = numsSize;
    for(int i = 0; i < numsSize; i++){
        x = (x*2 + nums[i]) % 5;
        arr[i] = (x == 0);
    }
    return arr;
}
