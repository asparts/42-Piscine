/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 06:55:11 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/28 18:24:09 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLUES_H
# define CLUES_H

struct s_Puzzle
{
	int	*grid;
	int	*clues;
	int	grid_size;
	int	glue_size;
};

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		continue_validate_numbers(char *values);
int		validate_numbers(char *values, int i);
int		validation_continued(char *values, int i);
int		count(char *p);
void	copy(struct s_Puzzle *puzzle, char *p);
int		validate_input(int argc, char *argv[]);
int		is_valid(struct s_Puzzle *puzzle);
void	ft_put_puzzle(struct s_Puzzle *puzzle);
void	ft_put_debug(struct s_Puzzle *puzzle);
int		solve(struct s_Puzzle *puzzle, int location);

#endif
