#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}

void* ft_calloc(size_t num, size_t size)
{
    void *p;
    p = malloc(num*size);
    if(!p)
        return NULL;
    ft_bzero(p, size);
    return p;
}
