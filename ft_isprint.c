/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:13:34 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/08 21:17:28 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= 32 && character <= 126)
		return (1);
	return (0);
}
