int ft_strlen(const char *str)
{
    int lenth;
    lenth = 0;
    while(str[lenth])
        lenth++;
    return lenth;
}
