/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:02:06 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/09 17:51:05 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	dest_index;
	size_t	src_len;
	size_t	src_index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(dest);
	dest_index = 0;
	src_index = 0;
	while (dest[dest_index])
		dest_index++;
	while (src[src_index] && (src_index + dest_index + 1) < dest_size)
	{
		dest[dest_index + src_index] = src[src_index];
		src_index++;
	}
	if (src_index < dest_size)
		dest[dest_index + src_index] = '\0';
	if (dest_size <= dest_len)
		return (src_len + dest_size);
	else
		return (src_len + dest_len);
}

