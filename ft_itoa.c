/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:45:23 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/11 21:23:04 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t count_char(long n)
{
    size_t len = 0;

    if (n <= 0)
    {
        len++;
        n = -n;
    }

    while (n > 0)
    {
        n /= 10;
        len++;
    }

    return len;
}

char *ft_itoa(int n)
{
    long number = n;
    size_t len = count_char(number);
    size_t is_negative = 0;
    char *str = malloc(sizeof(char) * (len + 1));

    if (!str)
        return NULL;

    if (number < 0)
    {
        is_negative = 1;
        number = -number;
        str[0] = '-';
    }

    str[len] = '\0';

    if (number == 0)
    {
        str[0] = '0';
        return str;
    }

    while (len > is_negative)
    {
        str[len - 1] = (number % 10) + '0';
        number /= 10;
        len--;
    }

    return str;
}
