/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:46:20 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 21:10:26 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str);
char	*ft_find_key(struct s_dict *table, char *to_find);
char	*ft_str_to_print(int nb_len, char *nb_print, char *nb);
void	ft_print_0_to_999(char *number, struct s_dict *table);
void	ft_print_str(char *str);
void	ft_recursive_number(char *nb, struct s_dict *table, int first);

void	ft_print_10_powers(int nb_len, struct s_dict *table)
	{
	char	*nb_10_pow;
	int		i;
	char	*print;

	while (nb_len % 3 != 1)
		nb_len--;
	nb_10_pow = (char *)malloc((nb_len + 1) * sizeof(char));
	nb_10_pow[0] = '1';
	i = 1;
	while (i < nb_len)
	{
		nb_10_pow[i] = '0';
		i++;
	}
	nb_10_pow[i] = '\0';
	print = ft_find_key(table, nb_10_pow);
	free(nb_10_pow);
	ft_print_str(print);
}

int	ft_check_3_zeros(char *nb)
{
	int	zeros;

	zeros = 0;
	while (*nb == '0' && zeros < 3)
	{
		zeros++;
		nb++;
	}
	if (zeros == 3)
		return (1);
	return (0);
}

void	ft_call_recursive(int nb_len, char *nb, struct s_dict *table)
{
	if (nb_len % 3 == 0)
		ft_recursive_number(&nb[3], table, 0);
	else
		ft_recursive_number(&nb[nb_len % 3], table, 0);
}

void	ft_recursive_number(char *nb, struct s_dict *table, int first)
{
	int		nb_len;
	char	nb_print[4];

	nb_len = ft_strlen(nb);
	if (nb_len > 3)
	{
		ft_str_to_print(nb_len, nb_print, nb);
		if (!ft_check_3_zeros(nb_print))
		{
			if (!first)
				write(1, " ", 1);
			ft_print_0_to_999(nb_print, table);
			write(1, " ", 1);
			ft_print_10_powers(nb_len, table);
		}
		ft_call_recursive(nb_len, nb, table);
	}
	else
	{	
		if (!first)
			write(1, " ", 1);
		if (!ft_check_3_zeros(nb))
			ft_print_0_to_999(nb, table);
		return ;
	}
}
