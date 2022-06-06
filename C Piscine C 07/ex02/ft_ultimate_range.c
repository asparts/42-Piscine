/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:42:12 by mnummi            #+#    #+#             */
/*   Updated: 2022/06/01 18:08:46 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);
/*
int	main(void)
{
	int	*range;
	int x = ft_ultimate_range(&range, 3, 10);
	printf("%d \n %d", *range, x);
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*p;
	int		i;

	i = 0;
	if (min >= max)
	{
		p = NULL;
		*range = p;
		return (0);
	}
	p = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}
