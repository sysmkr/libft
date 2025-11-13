/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:54:57 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/13 12:38:25 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_set(unsigned char c, const char *set)
{
	size_t		index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (0);
		index++;
	}
	return (1);
}

static size_t	ft_trimed_len(const char *str, const char *set)
{
	size_t		index;
	size_t		valid_char_count;

	index = 0;
	valid_char_count = 0;
	while (str[index])
	{
		if (ft_check_set(str[index], set))
			valid_char_count++;
		index++;
	}
	return (valid_char_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		index;
	char		*clean_string;
	size_t		clean_index;

	index = 0;
	clean_index = 0;
	clean_string = malloc(sizeof(char) * (ft_trimed_len(s1, set) + 1));
	if (!clean_string)
		return (0);
	while (s1[index])
	{
		if (ft_check_set(s1[index], set))
		{
			clean_string[clean_index] = s1[index];
			clean_index++;
		}
		index++;
	}
	clean_string[clean_index] = '\0';
	return (clean_string);
}
