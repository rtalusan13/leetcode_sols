bool isOneBitCharacter(int* bits, int bitsSize) {
    int i = 0;
    while(i < bitsSize){
        if(i == bitsSize-1){
            return (bits[i] == 0);
        }
        else if(bits[i] == 1){
            i = i+2;
        }
        else{
            i++;
        }
    }
    return false;
}
