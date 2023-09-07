/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:23:04 by dadantas          #+#    #+#             */
/*   Updated: 2023/09/03 19:25:48 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_str_to_print(int nb_len, char *nb_print, char *nb)
{
	int	i;

	i = 0;
	if (nb_len % 3 == 0)
	{
		while (i < 3)
		{
			nb_print[i] = nb[i];
			i += 1;
		}
	}
	else
	{
		while (i < nb_len % 3)
		{
			nb_print[i] = nb[i];
			i += 1;
		}
	}
	nb_print[i] = '\0';
	return (nb_print);
}
