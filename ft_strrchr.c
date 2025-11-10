/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:40:50 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 15:16:08 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	unsigned char 	*last;
	size_t		index;

	character = (unsigned char)c;
	index = 0;
	while (s[index])
	{
		if (s[index] == character)
			last = s + index;
		index++;
	}
	if (character == '\0')
	{
		last = s + index - 1;
		return (last);
	}
	return (last)
}
