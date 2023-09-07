/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:12:00 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 21:17:01 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str);

int	ft_is_0_to_19(char *number)
{
	if (ft_strlen(number) == 1)
		return (1);
	else if (
		ft_strlen(number) == 2
		&& number[0] <= '1')
		return (1);
	else if (
		ft_strlen(number) == 3
		&& number[0] == '0'
		&& number[1] <= '1')
		return (1);
	return (0);
}

int	ft_is_20_to_99(char *number)
{
	if (
		ft_strlen(number) == 2
		&& number[0] >= '2')
		return (1);
	return (0);
}

int	ft_is_100_to_999(char *number)
{
	if (
		ft_strlen(number) == 3
		&& number[0] <= '9')
		return (1);
	return (0);
}
