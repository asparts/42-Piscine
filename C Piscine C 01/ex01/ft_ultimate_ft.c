/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 05:29:09 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/30 12:55:45 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);
void	point(int ****ptr3);
/*
int	main(void)
{
	int	i;
	int	*ptr0;
	int	**ptr1;
	int	***ptr2;
	int	****ptr3;

	i = 5;
	ptr0 = &i;
	ptr1 = &ptr0;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	point(ptr3);
	printf("%d", i);
	return (0);
}*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	point(int ****ptr3)
{
	int	*****ptr4;
	int	******ptr5;
	int	*******ptr6;
	int	********ptr7;
	int	*********ptr8;

	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
}
