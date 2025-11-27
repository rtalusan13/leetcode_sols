int strStr(char* haystack, char* needle) {
    if(strlen(needle) == 0){
        return -1;
    }
    for(int i = 0; i < strlen(haystack) ; i++){
        if(haystack[i] == needle[0]){
            if(strlen(needle) == 1){
                return i;
            }
            for(int j = 1; j < strlen(needle); j++){
                if(j == strlen(needle)-1 && needle[j] == haystack[i+j]){
                    return i;
                }
                else if(needle[j] == haystack[i+j]){
                    continue;
                }
                else{
                    break;
                }
            }
        }
    }
    return -1;
}
