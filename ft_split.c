/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:50:08 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/13 15:04:20 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**create_array(char const *s, char const c)
{
	size_t		index;
	size_t		in_word;
	size_t		word_count;
	char		**box;

	index = 0;
	in_word = 0;
	word_count = 0;
	while (s[index])
	{
		if (!in_word && s[index] != c)
		{
			in_word++;
			word_count++;
		}
		if (in_word && s[index] == c)
			in_word--;
		index++;
	}
	box = malloc(sizeof(char *) * (word_count + 1));
	if (!box)
		return (0);
	return (box);
}

static char	*extract_word(char const *s, char const c, size_t i)
{
	size_t		ping;
	char		*box;
	size_t		box_index;

	ping = i;
	while (s[i] != c && s[i])
		i++;
	box = malloc(sizeof(char) * ((i - ping) + 1));
	box_index = 0;
	if (!box)
		return (0);
	while (ping < i)
	{
		box[box_index] = s[ping];
		box_index++;
		ping++;
	}
	box[box_index] = '\0';
	return (box);
}

char	**ft_split(char const *s, char const c)
{
	size_t		index;
	char		**array;
	size_t		array_index;

	index = 0;
	array = create_array(s, c);
	array_index = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			index++;
			continue ;
		}
		if (s[index] != c && s[index])
		{
			array[array_index] = extract_word(s, c, index);
			array_index++;
			while (s[index] != c && s[index])
				index++;
		}
	}
	array[array_index] = 0;
	return (array);
}
