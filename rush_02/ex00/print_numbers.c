/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:03:25 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 21:20:47 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_is_0_to_19(char *number);
int		ft_is_20_to_99(char *number);
int		ft_is_100_to_999(char *number);
void	ft_print_str(char *str);
char	*ft_find_key(struct s_dict *table, char *to_find);
char	*ft_trim_zeros(char *nb);
void	ft_strcpy(char *dest, char *src);

void	ft_print_0_to_19(char *number, struct s_dict *table)
{
	char	*print;

	number = ft_trim_zeros(number);
	print = ft_find_key(table, number);
	if (print)
		ft_print_str(print);
}

void	ft_print_20_to_99(char *number, struct s_dict *table)
{
	char	*print;
	char	dozens[3];

	dozens[0] = number[0];
	dozens[1] = '0';
	dozens[2] = '\0';
	print = ft_find_key(table, dozens);
	ft_print_str(print);
	if (number[1] != '0')
	{
		write(1, " ", 1);
		print = ft_find_key(table, &number[1]);
		ft_print_str(print);
	}
}

void	ft_print_100_to_999(char *number, struct s_dict *table)
{
	char	*print;
	char	hundreds[4];

	hundreds[0] = number[0];
	hundreds[1] = '\0';
	if (hundreds[0] != '0')
	{
		print = ft_find_key(table, &hundreds[0]);
		ft_print_str(print);
		write(1, " ", 1);
		ft_strcpy(hundreds, "100");
		print = ft_find_key(table, hundreds);
		ft_print_str(print);
	}
	if (number[1] != '0' || number[2] != '0')
	{
		if (hundreds[0] != '0')
			write(1, " ", 1);
		number++;
		if (ft_is_0_to_19(number))
			ft_print_0_to_19(number, table);
		if (ft_is_20_to_99(number))
			ft_print_20_to_99(number, table);
	}
}

void	ft_print_0_to_999(char *number, struct s_dict *table)
{
	if (ft_is_0_to_19(number))
		ft_print_0_to_19(number, table);
	else if (ft_is_20_to_99(number))
		ft_print_20_to_99(number, table);
	else if (ft_is_100_to_999(number))
		ft_print_100_to_999(number, table);
}
