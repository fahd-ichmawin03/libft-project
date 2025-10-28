/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fichmawi <fichmawi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:05:34 by fichmawi          #+#    #+#             */
/*   Updated: 2025/10/28 14:34:45 by fichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_of(long result, unsigned int digit, int sign)
{
	const long	max = 9223372036854775807;

	if (result > max / 10 || (result == max / 10 && digit > 7))
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;
	int		of_check;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		of_check = check_of(result, (str[i] - '0'), sign);
		if (of_check != 1)
			return (of_check);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
