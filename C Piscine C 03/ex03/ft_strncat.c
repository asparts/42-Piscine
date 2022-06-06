/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:59:56 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/25 16:53:29 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char test[10] = "test";
	char test2[10] = "test";
	ft_strncat(test, test2, 2);

	return (0);

	//to test move this to ft_strcat before return	
	//printf("%s", dest);
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
