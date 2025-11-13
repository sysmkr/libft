/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:44:26 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/13 15:20:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*one;
	unsigned char		*two;
	size_t				index;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (one[index] != two[index])
			return (one[index] - two[index]);
		index++;
	}
	return (0);
}
