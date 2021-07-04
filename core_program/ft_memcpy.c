/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:19:18 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/04 20:42:54 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char*)dest)[count] = ((unsigned char*)src)[count];
		count++;
	}
	return (dest);
}
