/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:34:18 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 15:27:54 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	character;
	size_t	index;

	character = (char)c;
	index = 0;
	while (s[index])
	{
		if (s[index] == character)
			return ((char *)s + index);
		index++;
	}
	return (0);
}
