class Solution {
  int climbStairs(int n) {
    int curr = 1;
    int prev = 0;
    for(int i = 0; i < n; i++){
        curr += prev;
        prev = curr - prev;
    }
    return curr;
  }
}