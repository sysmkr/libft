/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:40:50 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 21:01:44 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    const char		*last = 0;
    unsigned char	character = (unsigned char)c;
    size_t		index = 0;

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

