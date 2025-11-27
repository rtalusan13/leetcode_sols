int reverse(int x){
    bool goon = false;
    if(x < 0){
        goon = true;
        if(x < -2147483647){
            return 0;
        }
        x *= (-1);
    }
    while(x % 10 == 0){
        x /= 10;
        if(x == 0){
            return 0;
        }
    }
    int reverse = 0;
    while(x != 0){
        reverse *= 10;
        reverse += x % 10;
        x /= 10;
        if (((reverse > 214748363) && (x > 2147483647)) || ((reverse > 214748364) && (x != 0))){
            return 0;
        }
    }
    if(goon){
        reverse *= (-1);
    }
    return reverse;
}
