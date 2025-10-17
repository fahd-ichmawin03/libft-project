char *ft_strcpy(char *dst, char *src)
{
    int i;
    i = 0;
    while(src)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}