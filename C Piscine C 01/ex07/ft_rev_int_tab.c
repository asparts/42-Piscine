/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:43:03 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/23 10:55:23 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
/*
int main(void)
{
	int test[5] = {3, 6, 9, 10, 11};
	ft_rev_int_tab(test, 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", test[i]);
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reversed;
	int	swap;

	i = 0;
	reversed = size -1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[reversed];
		tab[reversed] = swap;
		i++;
		reversed--;
	}
}
