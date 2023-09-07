/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:10:07 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 18:43:43 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cpy_numbers(char *dest, char *origin)
{
	while ('0' <= *origin && *origin <= '9')
	{
		*dest = *origin;
		dest++;
		origin++;
	}
	*dest = '\0';
}

void	ft_read_number(char *dest, char *origin)
{
	if (*origin == '-')
	{
		*dest = *origin;
		origin++;
		dest++;
	}
	else if (*origin == '+')
		origin++;
	if ('0' <= *origin && *origin <= '9')
		ft_cpy_numbers(dest, origin);
}

void	ft_char_atoi(char *dest, char *origin)
{
	while (*origin)
	{
		if (*origin == ' ')
			;
		else if (
			*origin == '+'
			|| *origin == '-'
			|| ('0' <= *origin && *origin <= '9'))
		{
			ft_read_number(dest, origin);
			return ;
		}
		origin++;
	}
	return ;
}

int	ft_number_len(char *str)
{
	int	i;

	i = 0;
	while (*str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		str++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	test[] = "   1";
	int		i;
	char	*number;

	number = (char *)malloc((ft_number_len(test) + 2) * sizeof(char));
	ft_char_atoi(number, test);
	free (number);
	return (0);
}
*/
