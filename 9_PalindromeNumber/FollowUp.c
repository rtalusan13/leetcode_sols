/*Follow up: Could you solve it without converting the integer to a string?*/
bool isPalindrome(int x) {
    if(x == 0){
        return true;
    }
    if(x < 0 || x % 10 == 0){
        return false;
    }
    int reverse = 0;
    while(x != 0){
        if(x / 10 == reverse){
            return true;
        }
        reverse *= 10;
        reverse += (x % 10);
        x /= 10;
        if(reverse > x){
            return false;
        }
        if(reverse == x){
            return true;
        }
    }
    return false;
}
