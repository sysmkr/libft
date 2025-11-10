/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:26:00 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 15:44:03 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casted_string;
	unsigned char	casted_char;
	size_t		index;

	casted_string = (unsigned char *)s;
	casted_char = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (casted_string[index] == c)
			return (casted_string + index);
		index++;
	}
	return (0);
}
