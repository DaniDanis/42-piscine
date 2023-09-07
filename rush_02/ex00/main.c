/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:07:29 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/03 21:53:22 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_initial_check(int argc, char *argv[]);//err.c
int		ft_number_len(char *str);//input.c
void	ft_char_atoi(char *dest, char *origin);//input.c
int		ft_parse_dict(char *dict_path, struct s_dict *table);//dict_handler.c
int		ft_dict_line_count(char *dict_path);//line_count.c
void	ft_recursive_number(char *nb, struct s_dict *table, int first);
char	*ft_trim_zeros(char *nb);

int	main(int argc, char *argv[])
{
	struct s_dict	*dict;
	char			*value;
	char			*number;
	int				size_dict;
	char			*dict_path;

	if (!ft_initial_check(argc, argv))
		return (0);
	value = argv[1];
	dict_path = "numbers.dict";
	if (argc == 3)
	{
		dict_path = argv[1];
		value = argv[2];
	}
	number = (char *)malloc((ft_number_len(value) + 2) * sizeof(char));
	ft_char_atoi(number, value);
	value = ft_trim_zeros(value);
	size_dict = ft_dict_line_count(dict_path);
	dict = (struct s_dict *)malloc(size_dict * sizeof(struct s_dict));
	ft_parse_dict(dict_path, dict);
	ft_recursive_number(value, dict, 1);
	free(number);
	free(dict);
	return (0);
}
