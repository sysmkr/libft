/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:34:18 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/13 15:07:09 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	char	character;

	character = (char)c;
	index = 0;
	while (1)
	{
		if (s[index] == character)
			return ((char *)s + index);
		if (s[index] == '\0')
			break ;
		index++;
	}
	return (0);
}
