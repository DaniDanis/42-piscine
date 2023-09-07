/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:18:30 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/24 20:10:35 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int num_1, int num_2, int num_3)
{
	if (num_1 < num_2 && num_2 < num_3)
	{
		write(1, &num_1, 1);
		write(1, &num_2, 1);
		write(1, &num_3, 1);
	}
	if (num_1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		num_1;
	int		num_2;
	int		num_3;

	num_1 = '0';
	while (num_1 <= '7')
	{
		num_2 = num_1 + 1;
		while (num_2 <= '8')
		{
			num_3 = num_2 + 1;
			while (num_3 <= '9')
			{
				ft_print(num_1, num_2, num_3);
				num_3++;
			}
			num_2++;
		}
		num_1++;
	}
}
