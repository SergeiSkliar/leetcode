
int reverse(int x){
        long long int reverse = 0;
        
        while (x != 0){
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        if (reverse > INT_MAX || reverse < INT_MIN)
            return 0;
        else
            return reverse;
    }