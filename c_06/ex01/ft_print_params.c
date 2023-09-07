/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:41:15 by dadantas          #+#    #+#             */
/*   Updated: 2023/09/04 18:50:00 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{	
	int	count;

	count = 1;
	while (count < argc)
	{
		write(1, argv[count], ft_strlen(argv[count]));
		write(1, "\n", 1);
		count++;
	}
}
