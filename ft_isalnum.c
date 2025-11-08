/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:59:28 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/08 21:07:04 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if ((character >= '0' && character <= '9')
		|| (character >= 'A' && character <= 'Z')
		|| (character >= 'a' && character <= 'z'))
		return (1);
	return (0);
}
