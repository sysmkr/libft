/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 22:38:38 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 20:55:02 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*casted_dest;
	const unsigned char		*casted_src;
	size_t					index;

	casted_dest = (unsigned char *)dest;
	casted_src = (const unsigned char *)src;
	if (dest < src || dest >= src + n)
	{
		index = 0;
		while (index < n)
		{
			casted_dest[index] = casted_src[index];
			index++;
		}
	}
	else
	{
		index = n;
		while (index-- > 0)
			casted_dest[index] = casted_src[index];
	}
	return (dest);
}
