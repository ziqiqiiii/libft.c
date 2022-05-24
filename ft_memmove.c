/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:18:07 by tzi-qi            #+#    #+#             */
/*   Updated: 2022/05/24 14:55:47 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (src < dest)
	{
		while (len--)
			((char *)dest)[len] = ((char *)src)[len];
	}
	else if (src >= dest)
		ft_memcpy(dest, src, len);
	return (dest);
}
