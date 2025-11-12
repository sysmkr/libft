/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:35:33 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/12 21:15:49 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    size_t  total;

    if (count == 0 || size == 0)
        return (malloc(0));
    if (count > SIZE_MAX / size)
        return (NULL);
    total = count * size;
    ptr = malloc(total);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, total);
    return (ptr);
}

