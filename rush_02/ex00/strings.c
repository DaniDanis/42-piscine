/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:12:28 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 18:43:24 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strchr(char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}

char	*ft_skip_spaces(char *str)
{
	while (*str != '\0' && *str == ' ')
		str++;
	return (str);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_trim_spaces(char *src)
	{
	char	*begin;

	while (*src != '\0' && *src == ' ')
		src++;
	begin = src;
	while (*src)
		src++;
	src--;
	while (*src == ' ')
	{
		*src = '\0';
		src--;
	}
	return (begin);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
