#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    int str_size = mx_strlen(str);
    char *dup = mx_strnew(str_size);
    
    if (dup == NULL) {
        return NULL;
    }
    
    mx_strcpy(dup, str);
    
    return dup;
}

