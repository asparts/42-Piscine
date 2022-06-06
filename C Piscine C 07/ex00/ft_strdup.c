/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:49:29 by mnummi            #+#    #+#             */
/*   Updated: 2022/06/02 19:41:41 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*
char	*ft_strdup(char *src);

int main(void)
{
	char *copy = ft_strdup("test");
	printf("%s", copy);
	return (0);
}*/

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	copy = (char *)malloc(sizeof(char) * (size + 1));
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
