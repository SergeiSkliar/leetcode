char * defangIPaddr(char * address){
    int len = strlen(address);
    char *result = calloc(len+7, sizeof(char));
    int temp = 0;
    for (int i = 0; i < len; i++){
        if (address[i] == '.'){
            result[temp] = '[';
            result[temp+1] = '.';
            result[temp+2] = ']';
            temp += 3;
        }
        else {
            result[temp] += address[i];
            temp++;
        }
        }
    return result;
    }

