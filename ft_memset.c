/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fichmawi <fichmawi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:18:13 by fichmawi          #+#    #+#             */
/*   Updated: 2025/10/28 18:14:48 by fichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(p + i) = (unsigned char)x;
		i++;
	}
	return (ptr);
}
