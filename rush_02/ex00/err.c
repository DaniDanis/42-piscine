/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:08:45 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 20:24:11 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_str(char *str);//strings.c
int		ft_strlen(char *str);//strings.c

int	ft_check_numbers(int argc, char *argv[])
{
	char	*str;

	str = argv[argc - 1];
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

int	ft_check_n_args(int argc)
{
	if (argc == 2 || argc == 3)
		return (1);
	return (0);
}

int	ft_initial_check(int argc, char *argv[])
{
	if (!ft_check_n_args(argc))
	{
		ft_print_str("Error\n");
		return (0);
	}
	if (!ft_check_numbers(argc, argv))
	{
		ft_print_str("Error\n");
		return (0);
	}
	return (1);
}

int	ft_number_is_too_large(char *nb, struct s_dict *table, int len_dict)
{
	int	index;
	int	longest_nb;
	int	len_nb;

	index = 0;
	longest_nb = 0;
	len_nb = 0;
	while (index < len_dict)
	{
		len_nb = ft_strlen(table[index].key);
		if (longest_nb < len_nb)
			longest_nb = len_nb;
		index++;
	}
	len_nb = ft_strlen(nb);
	if (len_nb > longest_nb + 2)
	{
		ft_print_str("Dict Error\n");
		return (1);
	}
	return (0);
}
