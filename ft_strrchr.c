/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:40:50 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/13 15:30:04 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	character;
	size_t			index;

	last = 0;
	character = (unsigned char)c;
	index = 0;
	while (s[index])
	{
		if (s[index] == character)
			last = s + index;
		index++;
	}
	if (character == '\0')
		return ((char *)s + index);
	return ((char *)last);
}
