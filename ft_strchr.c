/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:34:18 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/09 18:41:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;
	size_t		index;

	character = (unsigned char)c;
	index = 0;
	while (s[index])
	{
		if (s[index] = character)
			return (s + index);
		index++;
	}
	return (0);
}
