#include <stdlib.h>

int ft_strlen(const char *str)
{
    int lenth;
    lenth = 0;
    while(str[lenth])
        lenth++;
    return lenth;
}

char *ft_strdup(const char *str)
{
    char *dup;
    int len_str;
    len_str = ft_strlen(str);
    dup = malloc(len_str+1);
    if(!dup)
        return NULL;
    int i;
    i = 0;
    while(str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}