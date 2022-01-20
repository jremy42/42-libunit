/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:50:10 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 16:15:12 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

static int	ft_wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			i += ft_wordlen(str + i, c);
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_wordcount((char *)s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			res[j] = ft_substr((char *)s, i, ft_wordlen((char *)(s + i), c));
			j++;
			i += ft_wordlen((char *)s + i, c);
		}
	}
	res[j] = 0;
	return (res);
}
