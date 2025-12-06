int romanToInt(char* s) {
    int arr[strlen(s)];
    int sum = 0;
    for(int i = 0; i < strlen(s); i++){
        switch (s[i]){
            case 'I':
                arr[i] = 1;
                break;
            case 'V':
                arr[i] = 5;
                break;
            case 'X':
                arr[i] = 10;
                break;
            case 'L':
                arr[i] = 50;
                break;
            case 'C':
                arr[i] = 100;
                break;
            case 'D':
                arr[i] = 500;
                break;
            case 'M':
                arr[i] = 1000;
                break;
        }
    }
    for(int j = 0; j < strlen(s)-1; j++){
        if(arr[j] < arr[j+1]){
            sum -= arr[j];
        }
        else{
            sum += arr[j];
        }
    }
    if(sizeof(arr) > 0){
        sum += arr[strlen(s)-1];
    }
    return sum;
}
