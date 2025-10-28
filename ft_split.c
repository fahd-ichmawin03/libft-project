/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fichmawi <fichmawi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:40:45 by fichmawi          #+#    #+#             */
/*   Updated: 2025/10/27 22:56:55 by fichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int	i;
	int	searching_word;
	int	count;

	i = 0;
	count = 0;
	searching_word = 1;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (searching_word)
				count++;
			searching_word = 0;
		}
		else
			searching_word = 1;
		i++;
	}
	return (count);
}

static char	*extract_str(const char *s1, const char *s2)
{
	char	*ret;
	int		i;
	long	range;

	range = s2 - s1;
	ret = (char *)malloc(range + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < range)
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

static void	free_all(char **arr, int n)
{
	while (n > 0)
		free(arr[--n]);
	free(arr);
}

static int	fill_words(char **tab_strs, char const *s, char c)
{
	int		i;
	int		j;
	char	*start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = (char *)&s[i];
		while (s[i] && s[i] != c)
			i++;
		if (start < &s[i])
		{
			tab_strs[j] = extract_str(start, &s[i]);
			if (!tab_strs[j])
				return (free_all(tab_strs, j), 0);
			j++;
		}
	}
	tab_strs[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_strs;

	if (!s)
		return (NULL);
	tab_strs = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!tab_strs)
		return (NULL);
	if (!fill_words(tab_strs, s, c))
		return (NULL);
	return (tab_strs);
}
