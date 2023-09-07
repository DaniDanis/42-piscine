/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:05:56 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/24 17:32:46 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'A' && str[index] <= 'Z')
				|| (str[index] >= 'a' && str[index] <= 'z')))
			return (0);
		index++;
	}
	return (1);
}
