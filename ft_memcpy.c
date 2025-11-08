/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 22:20:00 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/08 22:30:56 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*casted_dest;
	const unsigned char	*casted_src;
	size_t			index;

	casted_dest = (unsigned char *)dest;
	casted_src = (const unsigned char *)src;
	index = 0;
	while (index < n)
	{
		casted_dest[index] = casted_src[index];
		index++;
	}
	return (dest);
}
