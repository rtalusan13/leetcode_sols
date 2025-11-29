char* intToRoman(int num) {
    static char out[16];
    out[0] = '\0';
    int i = 0;
    char *setRoman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int vals[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

    while(num > 0){
        if(num >= vals[i]){
            strcat(out, setRoman[i]);
            num -= vals[i];
        }
        else{
            i++;
        }
    }
    return out;
}
