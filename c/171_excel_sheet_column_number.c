

int titleToNumber(char * s){
    int res = 0;
    while(*s)
        res = 26* res + (*(s++) - 'A' + 1);
    return res;
}
