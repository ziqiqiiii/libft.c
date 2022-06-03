/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:52:35 by tzi-qi            #+#    #+#             */
/*   Updated: 2022/06/03 11:19:36 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	compare(char s, char c)
{
	if (s == c)
		return (0);
	return (1);
}

static int	number_wd(char *str, char c)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i])
	{
		if (compare(str[i], c))
		{
			number++;
			while (compare(str[i], c) && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (number);
}

static int	num_char(char *s, char c)
{
	int	count;

	count = 0;
	while (compare(*s, c) == 1 && *s++ != '\0')
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**outcome;
	int		i;
	int		j;
	char	*a;

	if (s == NULL)
		return (NULL);
	a = (char *)s;
	outcome = malloc((number_wd(a, c) + 1) * sizeof(char *));
	if (!outcome)
		return (NULL);
	outcome[0] = 0;
	i = 0;
	while (*a)
	{
		j = 0;
		if (compare(*a, c) == 1)
		{
			outcome[i] = malloc(sizeof(char) * (num_char(a, c) + 1));
			while (*a != '\0' && compare(*a, c) == 1)
				outcome[i][j++] = *a++;
			outcome[i++][j] = '\0';	 
		}
		else
			a++;
	}
	outcome[i] = NULL;
	return (outcome);
}

// int	main(void)
// {
// 	char	s[100] = "Tripouille hello world";
// 	char	c = ' ';
// 	int		i;

// 	i = 0;
// 	char	**outcome = ft_split(s, c);
// 	while (outcome[i])
// 	{
// 		printf ("%d %s\n",i ,outcome[i]);
// 		i++;
// 	}
// }