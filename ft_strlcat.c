/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:02:06 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 21:06:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	index = 0;
	while (src[index] && (index + dest_len + 1) < dest_size)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	if (index < dest_size)
		dest[dest_len + index] = '\0';
	if (dest_size <= dest_len)
		return (src_len + dest_size);
	else
		return (src_len + dest_len);
}

