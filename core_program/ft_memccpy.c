/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:19:22 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/04 20:43:05 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char*)dest)[count] = ((unsigned char*)src)[count];
		if (((unsigned char*)dest)[count] == c)
		{
			return (dest + count + 1);
		}
		count++;
	}
	return (NULL);
}
