/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:50:34 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 17:00:43 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) <= start)
		len = 0;
	if (ft_strlen((char *)s) <= len)
		len = (size_t)ft_strlen((char *)s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (len > 0 && s[start + i])
	{
		res[i] = s[start + i];
		i++;
		len--;
	}
	res[i] = '\0';
	return (res);
}
