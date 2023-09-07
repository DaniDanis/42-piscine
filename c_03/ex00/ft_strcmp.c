/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:30:48 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/30 20:35:57 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *s1,const char *s2)
{
	int		index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] - s2[index] > 0)
				return (s1[index] - s2[index]);
			else
				return (s1[index] - s2[index]);
		}
		index++;
	}
	if (s1[index] > s2[index])
		return (s1[index] - s2[index]);
	else if (s2[index] > s1[index])
		return (s1[index] - s2[index]);
	return (0);
}

int main(void)
{
	char x[] = "teste";
	char y[] = "Teste";
	printf("%i\n", strcmp("teste", "Teste"));
	printf("%i", strcmp(x, y));

}