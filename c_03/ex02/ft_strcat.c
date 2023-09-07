/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:42:23 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/28 19:04:49 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[index])
	{
		dest[count + index] = src[index];
		index++;
	}
	dest[count + index] = '\0';
	return (dest);
}
