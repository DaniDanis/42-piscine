/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:08:07 by dadantas          #+#    #+#             */
/*   Updated: 2023/09/03 21:38:51 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	index;

	index = 0;
	while ((str1[index] || str2[index]) && index < 50)
	{
		if (str1[index] != str2[index])
			return (0);
		index++;
	}
	return (1);
}

char	*ft_find_key(struct s_dict *table, char *to_find)
{
	unsigned long	index;

	index = 0;
	while (index < 1024)
	{
		if (ft_strcmp(table[index].key, to_find))
			return (table[index].value);
		index++;
	}
	return (NULL);
}
