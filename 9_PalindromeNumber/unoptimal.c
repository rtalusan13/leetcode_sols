bool isPalindrome(int x) {
    if(x < 10){
        return x >= 0;
    }
    if(x % 10 == 0){
        return false;
    }
    int arr[10];
    int n = 0;
    while(x != 0){
        arr[n] = x % 10;
        n++;
        x /= 10;
    }
    int j = n-1;
    for(int i = 0; i < (n/2); i++){
        if(arr[i] != arr[j]){
            return false;
        }
        j--;
    }
    return true;
}
