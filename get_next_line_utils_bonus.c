/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-halle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:32:50 by jd-halle          #+#    #+#             */
/*   Updated: 2024/07/18 22:33:00 by jd-halle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strchr(char *str, int c )
{
	unsigned int	i;

	i = 0;
	if (c > 256)
		c = c % 256;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *) str + i);
		i++;
	}
	if (c == 0)
		return ((char *)str + i);
	return (0);
}

char	*ft_strdup(char *str)
{
	char	*str2;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!str2)
		return (NULL);
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}

char	*ft_strndup(char *str, int n)
{
	char	*str2;
	int		i;

	if (!str)
		return (NULL);
	str2 = malloc(sizeof(char) * (n + 1));
	if (!str2)
		return (NULL);
	i = 0;
	while (n)
	{
		str2[i] = str[i];
		i++;
		n--;
	}
	str2[i] = 0;
	return (str2);
}
