/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:13:27 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/28 08:04:44 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	int result;

	result = ft_strncmp("", "", 6);
	
	printf("%d", result);

	return(0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	int					x;

	i = 0;
	x = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{	
		if (s1[i] == s2[i])
		{
			x = 0;
			i++;
		}
		else if (s1[i] > s2[i])
		{
			x = 1;
			break ;
		}
		else
		{
			x = -1;
			break ;
		}
	}
	return (x);
}
