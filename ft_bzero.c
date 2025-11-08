/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 22:03:23 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/08 22:16:03 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*casted_string;
	size_t		index;

	casted_string = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		casted_string[index] = '\0';
		index++;
	}
}
