bool isPalindrome(long long int x) { 
    if (x < 0)
        return false;  
    long long int t = x;  
    long long int r, s = 0;
 
    while (t != 0) {
        r = t % 10;     
        s = s * 10 + r;        
        t = t / 10;     
    }
 
    return (x == s);
}
