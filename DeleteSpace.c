#include "myhear.h"

char* DeleteSpace(char s[]){
    char* str = (char*)malloc(sizeof(s));
    int i, k = 0;

    for (i = 0; i < strlen(s); i++)
        if (s[i] != ' ') str[k++] = s[i];

    str[k] = '\0';
    return str;
}
