/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:51:05 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/30 12:53:30 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	index;

	index = 0;
	while (str[index])
	{
		count = 0;
		if (str[index] == to_find[count])
		{
			while (to_find[count])
			{
				if (str[index + count] == to_find[count])
					count++;
				else
					break ;
			}
			if (to_find[count] == '\0')
				return (str + index);
		}
		index ++;
	}
	if (to_find[count] == '\0')
		return (str + index);
	else
		return ((void *)0);
}
