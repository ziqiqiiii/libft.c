/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:55:11 by tzi-qi            #+#    #+#             */
/*   Updated: 2022/05/26 14:01:36 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	char	*join;

	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return (NULL);
	x = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = malloc(x * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (join);
}
