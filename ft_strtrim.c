/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:02:51 by tzi-qi            #+#    #+#             */
/*   Updated: 2022/06/01 15:41:07 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*outcome;

	start = 0;
	end = (int)ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start])
	{
		if (compare(s1[start], (char *)set) == 0)
			start++;
		else
			break ;
	}
	while (end > 0)
	{
		if (compare(s1[end], (char *)set) == 0)
			end--;
		else
			break ;
	}
	outcome = malloc(sizeof(char) * (end - start + 1));
	if (!outcome)
		return (NULL);
	ft_strlcpy(outcome, s1 + start, end - start + 2);
	return (outcome);
}

// int main(void)
// {
// 	char	*s1 = "abbbhello, worldccaa";
// 	char	*set = "abc";

// 	printf("%s\n", ft_strtrim(s1, set));

// }