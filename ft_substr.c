/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:10:30 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 21:17:46 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  string_len;
    size_t  substr_len;
    size_t  i;
    char    *extract;

    string_len = ft_strlen(s);
    if (start >= string_len)
        return (malloc(1)); // empty string

    substr_len = len;
    if (start + len > string_len)
        substr_len = string_len - start;

    extract = malloc(substr_len + 1);
    if (!extract)
        return (NULL);

    i = 0;
    while (i < substr_len)
    {
        extract[i] = s[start + i];
        i++;
    }
    extract[i] = '\0';
    return (extract);
}
