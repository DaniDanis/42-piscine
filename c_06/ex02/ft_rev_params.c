/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:47:54 by dadantas          #+#    #+#             */
/*   Updated: 2023/09/04 18:52:48 by dadantas         ###   ########.fr       */
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
	int	index;

	index = 1;
	while (index < argc)
	{
		write(1, argv[argc - index], ft_strlen(argv[argc - index]));
		write(1, "\n", 1);
		index++;
	}
}
