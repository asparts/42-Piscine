/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:21:38 by mnummi            #+#    #+#             */
/*   Updated: 2022/06/02 22:27:04 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
int		get_total_len(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src);
/*
int	main(void)
{
	char *test[2];
	test[0] = "test1";
	test[1] = "test2";
	int a = get_total_len(2, test, "%");
	printf("%d\n", a);
	char *s = ft_strjoin(2, test, "%");
	int i = 0;
	while(i < 13)
	{
		printf("%c", s[i]);
		i++;
	}
	return (0);
}*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*new_string;
	int		i;

	if (size == 0)
	{
		new_string = malloc(sizeof(char));
		*new_string = 0;
		return (new_string);
	}
	len = get_total_len(size, strs, sep);
	new_string = malloc(sizeof(char) * len);
	*new_string = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(new_string, strs[i]);
		if (i < size - 1)
			ft_strcat(new_string, sep);
		i++;
	}
	return (new_string);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	strs_len;
	int	sep_len;
	int	i;

	strs_len = 0;
	sep_len = (size * ft_strlen(sep)) - 1;
	i = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	return (sep_len + strs_len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
