/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:24:00 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 18:43:35 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_str(char *str);//strings.c

int	ft_dict_line_count(char *dict_path)
{
	int		dict;
	char	buffer;
	int		i;

	dict = open(dict_path, O_RDONLY);
	if (dict == -1)
	{
		ft_print_str("Dict Error\n");
		return (1);
	}
	i = 0;
	while (read(dict, &buffer, 1) > 0)
	{
		if (buffer == '\n')
		{
			i++;
		}
	}
	close(dict);
	if (buffer != '\n')
	{
		i++;
	}
	return (i);
}
