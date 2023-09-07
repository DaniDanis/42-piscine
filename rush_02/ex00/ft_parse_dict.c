/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:51:07 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 11:32:44 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_str(char *str);//strings.c
char	*ft_strchr(char *str, int ch);//ft_strchr.c
void	ft_char_atoi(char *dest, char *origin);
char	*ft_trim_spaces(char *src);
void	ft_strcpy(char *dest, char *src);

void	ft_dictput(char *key, struct s_dict *table)
{
	char	*value;

	value = ft_strchr(key, ':');
	if (value != NULL)
	{
		*value = '\0';
		value++;
	}
	if (value)
	{
		ft_char_atoi(table[0].key, key);
		value = ft_trim_spaces(value);
		ft_strcpy(table[0].value, value);
	}
}

void	ft_end_string(char	*buffer)
{
	char	*end;

	end = buffer;
	*end = '\0';
}

void	ft_dict_read(int dict, struct s_dict *table)
{
	ssize_t	bytes;
	char	*buffer;
	char	*start;
	ssize_t	i;

	buffer = (char *)malloc(1024 * sizeof(char));
	bytes = read(dict, buffer, 1024);
	while (bytes > 0)
	{
		start = buffer;
		i = 0;
		while (i < bytes)
		{
			if (buffer[i] == '\n')
			{
				ft_end_string(&buffer[i]);
				ft_dictput(start, table);
				table++;
				start = &buffer[i + 1];
			}
			i++;
		}
		bytes = read(dict, buffer, sizeof(buffer));
	}
	free (buffer);
}

int	ft_parse_dict(char *dict_path, struct s_dict *table)
{
	int		dict;

	dict = open(dict_path, O_RDONLY);
	if (dict == -1)
	{
		ft_print_str("Dict Error\n");
		return (1);
	}
	ft_dict_read(dict, table);
	return (0);
}
