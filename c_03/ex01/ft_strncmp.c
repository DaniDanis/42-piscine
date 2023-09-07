/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:42:44 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/30 10:52:35 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		index;

	index = 0;
	while (s1[index] && s2[index] && index < n)
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] - s2[index] > 0)
				return (1);
			else
				return (-1);
		}
		index++;
	}
	if (s1[index] > s2[index] && index < n)
		return (1);
	else if (s2[index] > s1[index] && index < n)
		return (-1);
	return (0);
}
