/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:21:30 by susharma          #+#    #+#             */
/*   Updated: 2022/05/28 18:40:23 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clues.h"
#include <stdio.h>

int	solve(struct s_Puzzle *puzzle, int location)
{
	int	i;

	i = 1;
	if (location >= (puzzle->grid_size * puzzle->grid_size))
	{
		return (1);
	}
	while (i <= puzzle->grid_size)
	{
		puzzle->grid[location] = i;
		if (is_valid(puzzle))
		{
			if (solve(puzzle, location + 1))
				return (1);
		}
		ft_put_puzzle(puzzle);
		puzzle->grid[location] = 0;
		++i;
	}
	return (0);
}
