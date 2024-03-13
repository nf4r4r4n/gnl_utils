/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:25:57 by nfararan          #+#    #+#             */
/*   Updated: 2024/03/13 13:42:16 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*join;

	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		join[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		join[j] = s2[i];
		i++;
		j++;
	}
	join[j] = '\0';
	return (join);
}
