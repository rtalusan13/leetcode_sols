int numWaterBottles(int numBottles, int numExchange) {
    int sum = numBottles;
    int rem = 0;
    while(numBottles > 0){
        numBottles += rem;
        rem = numBottles%numExchange;
        numBottles /= numExchange;
        sum += numBottles;
    }
    return sum;
}
