/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:06:39 by cnatanae          #+#    #+#             */
/*   Updated: 2023/08/19 23:19:49 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c);

void	ft_write_square(int x, int y)
{
	int	cord_x;
	int	cord_y;

	cord_y = 1;
	while (cord_y <= y)
	{
		cord_x = 1;
		while (cord_x <= x)
		{
			if ((cord_x == 1 && cord_y == 1) || (cord_x == x && cord_y == 1)
				|| (cord_y == y && cord_x == 1) || (cord_x == x && cord_y == y))
				ft_putchar('o');
			else if (cord_y == 1 || cord_y == y)
				ft_putchar('-');
			else if (cord_x == 1 || cord_x == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			cord_x++;
		}
		cord_y++;
		ft_putchar('\n');
	}
}

void	ft_rush00(int x, int y)
{
	if ((x <= 0) || (y <= 0))
	{
		write(1, "Negative numbers and 0 are not allowed.", 39);
		return ;
	}	
	ft_write_square(x, y);
}
