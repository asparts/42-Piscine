/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:08:42 by susharma          #+#    #+#             */
/*   Updated: 2022/05/30 15:03:17 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clues.h"
#include <stdio.h>
#include <stdlib.h>

int	is_whitespace(char c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n')
		|| (c == '\f') || (c == '\r'));
}

int	count(char *p)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (p[i] != '\0')
	{
		while ((p[i] == ' ') || (p[i] == '\t') || (p[i] == '\n')
			|| (p[i] == '\f') || (p[i] == '\r'))
			i++;
		if (p[i] >= '0' && p[i] <= '9')
		{
			count++;
		}
		if ((p[i] < '0' && p[i] > 32) || (p[i] > '9')
			|| (!is_whitespace(p[i + 1]) && p[i + 1] != '\0'))
		{
			return (-1);
		}
		i++;
	}
	return (count);
}

void	copy(struct s_Puzzle *puzzle, char *p)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while ((p[i] == ' ') || (p[i] == '\t') || (p[i] == '\n')
		|| (p[i] == '\f') || (p[i] == '\r') || p[i] != '\0')
	{
		if (p[i] >= '0' && p[i] <= '9')
		{
			puzzle->clues[y] = p[i] - '0';
			y++;
		}
		i++;
	}
}

int	is_valid_clues(struct s_Puzzle *puzzle, int n)
{
	int	i;

	i = 0;
	while (i < puzzle->glue_size)
	{
		if (!(puzzle->clues[i] >= 1 && puzzle->clues[i] <= n))
			return (0);
		++i;
	}
	return (1);
}

void	init_array(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = 0;
		++i;
	}
}

int	validate_input(int argc, char *argv[])
{
	int	i;
	int	y;
	char	*p;
	struct s_Puzzle	puzzle;
	int	count2;

	i = 0;
	y = 0;
	p = argv[1];
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	count2 = count(p);
	puzzle.glue_size = count2;
	puzzle.grid_size = count2 / 4;
	if (count2 % 4 == 0 && count2 >= 16 && count2 <= 36)
	{
		puzzle.clues = malloc(puzzle.glue_size * sizeof(int));
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	copy(&puzzle, p);
	if (!is_valid_clues(&puzzle, puzzle.grid_size))
	{
		ft_putstr("Error\n");
		return (1);
	}
	puzzle.grid = malloc(puzzle.grid_size * sizeof(int));
	init_array(puzzle.grid, puzzle.grid_size);
	if (!solve(&puzzle, 0))
	{
		ft_putstr("ErrorLDJ\n");
		return (1);
	}
   	else
	{
		ft_put_puzzle(&puzzle);
	}

	return (0);
}

int	main(int argc, char *argv[])
{
	validate_input(argc, argv);
	return (0);
}
