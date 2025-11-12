/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:26:00 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 20:57:23 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casted_string;
	size_t		index;

	casted_string = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (casted_string[index] == (unsigned char)c)
			return (casted_string + index);
		index++;
	}
	return (0);
}
