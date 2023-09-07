/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:13:04 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/28 20:37:09 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	int				count;

	index = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[index] && index < nb)
	{
		dest[count + index] = src[index];
		index++;
	}
	dest[count + index] = '\0';
	return (dest);
}
