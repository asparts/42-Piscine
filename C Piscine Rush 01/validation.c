/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:18:35 by cliao             #+#    #+#             */
/*   Updated: 2022/05/28 18:44:01 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"clues.h"

int	validate_duplicate(struct s_Puzzle *p, int start, int increment)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	while (i < p->grid_size - 1)
	{
		j = i + 1;
		while (j < p->grid_size)
		{
			a = p->grid[(i * increment) + start];
			b = p->grid[(j * increment) + start];
			if (!(a == 0 || b == 0))
			{
				if (a == b)
					return (0);
			}
			++j;
		}
		i++;
	}
	return (1);
}

int	validate_span(struct s_Puzzle *p, int start, int clue, int increment)
{
	int	i;
	int	j;
	int	counter;
	int	max;

	if (!validate_duplicate(p, start, increment))
	{
		return (0);
	}
	i = 0;
	counter = 1;
	max = p->grid[start];
	while (i < p->grid_size)
	{
		j = (i * increment) + start;
		if (p->grid[j] == 0)
			return (1);
		if (p->grid[j] > max)
		{
			counter++;
			max = p->grid[j];
		}
		if (p->grid[j] == p->grid_size)
		{
			if (clue == counter)
				return (1);
		}
		i++;
	}
	return (0);
}

int	is_valid(struct s_Puzzle *p)
{	
	int	i;
	int	span_len;
	int	counter;

	i = 0;
	counter = 0;
	span_len = p->glue_size / 4;
	while (i < p->glue_size)
	{
		if (i < span_len)
			counter += validate_span(p, i,
					p->clues[i], +p->grid_size);
		else if (i >= span_len && i < 2 * span_len)
			counter += validate_span(p, (i % span_len)
					+ ((span_len - 1) * span_len), p->clues[i], -p->grid_size);
		else if (i >= 2 * span_len && i < 3 * span_len)
			counter += validate_span(p, (i % span_len) * span_len,
					p->clues[i], +1);
		else
			counter += validate_span(p, (((i % span_len) + 1) * span_len) - 1,
					p->clues[i], -1);
		i++;
	}
	return (counter == p->glue_size);
}
/*
   int main(){

   int grid[16] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3};
   int clues[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
   struct s_Puzzle	p;
   p.grid = grid;
   p.clues = clues;
   p.grid_size = 4;
   p.glue_size = 16;
   printf("%d\n", is_valid(&p));
   return (0);
   }*/
