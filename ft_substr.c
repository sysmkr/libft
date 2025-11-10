/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:10:30 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 20:50:02 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*extract;
	size_t		string_len;
	size_t		greed_len;
	size_t		index;

	string_len = ft_strlen(s);
	if (start >= string_len)
		return (0);
	greed_len = ft_greed_len(s, start);
	extract = malloc(sizeof(char) * greed_len);
	if (!extract)
		return (0);
	index = 0;
	while (index < greed_len)
	{
		extract[index] = s[index + start];
		index++;
	}
	return (extract);
}

static size_t	ft_greed_len(const char string, unsigned int start)
{
	size_t	index;

	index = (size_t)start;
	while (string[index])
		index++;
	return (index);
}
