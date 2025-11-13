/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:10:30 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/13 15:10:39 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_start(char const *s, unsigned int start)
{
	size_t		string_length;

	string_length = ft_strlen(s);
	if (start >= string_length)
		return (0);
	return (1);
}

static size_t	up_to_len(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	s_len;

	index = start;
	s_len = ft_strlen(s);
	while (index < s_len && (index - start) < len)
		index++;
	return (index - start);
}

static char	*fill(char *b, char const *str, unsigned int start, size_t len)
{
	size_t	pin;
	size_t	index;
	size_t	str_len;

	pin = start;
	index = 0;
	str_len = ft_strlen(str);
	while (pin < str_len && (pin - start) < len)
	{
		b[index] = str[pin];
		index++;
		pin++;
	}
	b[index] = '\0';
	return (b);
}

static char	*safe_alloc(size_t size)
{
	char	*new_box;

	new_box = malloc(sizeof(char) * (size + 1));
	if (!new_box)
		return (0);
	if (!size)
		new_box[0] = '\0';
	return (new_box);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!check_start(s, start))
		substring = safe_alloc(0);
	else
	{
		substring = safe_alloc(up_to_len(s, start, len));
		fill(substring, s, start, len);
	}
	return (substring);
}
