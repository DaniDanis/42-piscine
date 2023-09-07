/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:11:29 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/24 20:21:31 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb2(void)
{
	int numb_1;
	int numb_2;

	numb_1 = 0;
	while (numb_1 <= 98)
	{
		numb_2 = numb_1 + 1;
		while (numb_2 <= 99)
		{
			ft_print(numb_1, numb_2);
		}
	}
}
