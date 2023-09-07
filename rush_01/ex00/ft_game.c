/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:28 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 07:21:46 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_matrix(int matrix[4][4])
{
	int	line;
	int	collumn;

	line = 0;
	collumn = 0;
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			printf("%d ", matrix[line][collumn]);
			collumn++;
		}
		line++;
		printf("\n");
	}
}

char	ft_game(int *views[4])
{
	int matrix[4][4] = {0};
	int line;
	int collumn;
	int count_number;
	int useless_squares[4][4] = {0};
	int number_to_check;
	int index;
	int sum;

	line = 0;

	// Write in the matrix basead in input. First Step
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			if (line == 0)
			{
				// ft_linezero
			}
			else if (line == 1)
			{
				// ft_lineone
			}
			else if (line == 2)
			{
				// ft_linetwo
			}
			else
			{
				// ft_orthers
			}
			collumn++;
		}
		line ++;
	}

	line = 0;
	number_to_check = 3;
	count_number = 0;
	// Scan in the matrix to find spots to be writed. Second Step
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			if (matrix[line][collumn] == number_to_check)
			{
				count_number++;
				index = 0;
				while (index < 4)
				{
					useless_squares[line][index] = -1;
					useless_squares[index][collumn] = -1;
					index++;
				}
			}
			else if (matrix[line][collumn] != 0)
			{
				useless_squares[line][collumn] = -1;
			}
			collumn ++;
		}
		line++;
		if (line == 4 && count_number < 4)
		{
			if (count_number == 3)
			{
				line = 0;
				while (line < 4)
				{
					collumn = 0;
					while (collumn < 4)
					{
						if (useless_squares[line][collumn] == 0)
							matrix[line][collumn] = number_to_check;
					}
				}
			}
			else if (number_to_check == 3)
			{
				line = 0;
				while (line < 4)
				{
					collumn = 0;
					while (collumn < 4)
					{
						if (views[line][collumn] == 3)
						{
							if (line == 0)
								useless_squares[0][collumn] = -1;
							else if (line == 1)
								useless_squares[3][collumn] = -1;
							else if (line == 2)
								useless_squares[collumn][0] = -1;
							else
								useless_squares[collumn][3] = -1;
						}
						collumn++;
					}
					line ++;
					if (line == 4 && count_number < 4)
					{
						line = 0;
						while (line < 4)
						{
							collumn = 0;
							while (collumn < 4)
							{
								if (useless_squares[line][collumn] == 0)
								{
									index = 0;
									sum = 0;
									while (index < 4)
									{
										sum += useless_squares[line][index];
										index++;
									}
									if (sum == -3)
										matrix[line][collumn] = number_to_check;
									else
									{
										sum = 0;
										index = 0;
										while (index < 4)
										{
											sum += useless_squares[index][collumn];
											index++;
										}
										if (sum == -3)
											matrix[line][collumn] = number_to_check;
									}
								}
								collumn++;
							}
							line++;
						}
					}
				}
			}
		line = 4;
		}
	}
	ft_print_matrix(matrix);
	return (0);
}




int	main(int argc, char **argv)
{
	int col_up[4] = {3, 2, 3, 1};
	int col_down[4] = {2, 3, 1, 2};
	int row_left[4] = {3, 2, 1, 2};
	int row_right[4] = {1, 2, 3, 2};
	int	*inputs[4];

	inputs[0] = col_up;
	inputs[1] = col_down;
	inputs[2] = row_left;
	inputs[3] = row_right;


	ft_game(inputs);
}
