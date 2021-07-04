/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:19:14 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/04 20:42:57 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*ptr_d;
	char	*ptr_s;

	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	count = 0;
	if (ptr_d > ptr_s)
	{
		while (n-- > 0)
			ptr_d[n] = ptr_s[n];
	}
	else
		while (count < n)
		{
			ptr_d[count] = ptr_s[count];
			count++;
		}
	return(dest);
}
