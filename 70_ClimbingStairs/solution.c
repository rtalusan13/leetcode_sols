int climbStairs(int n) {
    if(n < 2){
        return 1;
    }
    int prev = 1;
    int curr = 1;
    for(int i = 1; i < n; i++){
        curr += prev;
        prev = curr - prev;
    }
    return curr;
}
