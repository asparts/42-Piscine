/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:23:38 by mnummi            #+#    #+#             */
/*   Updated: 2022/06/02 22:27:47 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int i = 0;
	int min = 3;
	int max = 10;
	int *p = ft_range(min, max);
	while(i <= max - 1 - min)
	{
		printf("%d", p[i]);
		i++;
	}
	
	return (0);
}*/

int	*ft_range(int min, int max)
{
	int		*p;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	p = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
