/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:23:26 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/25 10:23:48 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char test[10] = "test";
	char test2[10] = "test";
	ft_strcat(test, test2);

	printf("%s", test);
	return (0);

//	to test move this to ft_strcat before return	
}*/

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
