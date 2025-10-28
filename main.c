#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    ft_memset(&x, 1, 1);
    ft_memset(&x+1, 2, 1);
    // memset((char *)&x, 57, 1);
    // ft_memset((char *)&x, 57, 1);
    // ft_memset((char *)&x+1, 5, 1);
    printf("\n%d\n", x);
}