/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:53:30 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 20:12:06 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	size_t	string_length;
	size_t	index;
	char	*new_string;

	while (s[string_length])
		string_length++;
	new_string = malloc(sizeof(char) * string_length);
	if (!new_string)
		return (0);
	index = 0;
	while (s[index])
	{
		new_string[index] = s[index];
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}
