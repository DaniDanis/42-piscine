/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:49:46 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/23 16:10:25 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= ' ' && str[index] <= '~')
			index++;
		else
			return (0);
	}
	return (1);
}
