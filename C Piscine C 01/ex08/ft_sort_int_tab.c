/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:31:29 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/19 23:18:35 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
/*int	main(void)
{
    int tab[12] = {12, 15, 66, 75, 45, 65, 87, 89, 11, 90, 64, 9};
    ft_sort_int_tab(tab, 12);
    for (int i = 0; i < 12; i++) 
        printf("%d ", tab[i]);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (size-- >= 0)
	{
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				i = 0;
			}
			else
			{
			i++;
			}
		}
	}
}
