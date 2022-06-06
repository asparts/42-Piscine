/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:40:35 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/28 18:40:53 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clues.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_put_puzzle(struct s_Puzzle *puzzle)
{
	int	i;

	i = 0;
	while (i < puzzle->grid_size * puzzle->grid_size)
	{
		if (i % puzzle->grid_size == 0 && i != 0)
			ft_putchar('\n');
		ft_putchar(puzzle->grid[i] + '0');
		if ((i + 1) % puzzle->grid_size != 0)
			ft_putchar(' ');
		++i;
	}
	ft_putchar('\n');
}

void	ft_put_debug(struct s_Puzzle *puzzle)
{
	int	i;

	i = 0;
	while (i < puzzle->glue_size)
	{
		ft_putchar(puzzle->clues[i] + '0');
		ft_putchar(' ');
		++i;
	}
	ft_putchar('\n');
}
