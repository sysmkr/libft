/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:51:37 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 15:14:51 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      match_at(const char *str, const char *seq, size_t len)
{
        size_t  index;

        index = 0;
        while (seq[index] && (index < len))
        {
                if (str[index] != seq[index])
                        return (0);
                index++;
        }
        return (seq[index] == '\0');
}

char    *ft_strnstr(const char *str, const char *seq, size_t len)
{
        size_t  index;

        index = 0;
        if (*seq == '\0')
                return ((char *)str);
        while (str[index] && index < len)
        {
                if (str[index] == seq[0] && match_at(str + index, seq, len - index))
                        return ((char *)(str + index));
                index++;
        }
        return (0);
}
