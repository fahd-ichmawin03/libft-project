char *ft_strncpy(char *dst, char *src, int n)
{
    int i;
    i = 0;
    while(src && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    if(i == n)
        dst[i] = '\0';
    while(i<n)
    {
        dst[i] = '\0';
        i++;
    }
    return dst;
}