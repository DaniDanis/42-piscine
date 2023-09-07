/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:41:49 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/29 19:59:33 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char letter)
{
	if (!(letter >= 'A' && letter <= 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_char_is_uppercase(str[index]))
			str[index] += 32;
		if (str[index] >= 'a' && str[index] <= 'z'
			&& (index == 0 || str[index - 1] <= '.'))
			str[index] -= 32;
		index++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	*capit;

	capit = ft_strcapitalize(str);
	printf("Primeira maiúscula: %s\n", capit);
	return (0);
}
