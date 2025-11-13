/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:37:28 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 12:31:33 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	casted_char;
	unsigned char	*casted_string;
	size_t			index;

	casted_string = (unsigned char *)s;
	casted_char = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		casted_string[index] = casted_char;
		index++;
	}
	return (s);
}
