public class Solution {
    public int ClimbStairs(int n) {
        int prev = 0;
        int curr = 1;
        for(int i = 0; i < n; i++){
            curr += prev;
            prev = curr - prev;
        }
        return curr;
    }
}