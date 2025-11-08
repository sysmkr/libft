/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolardstudent42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:06:09 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/08 21:10:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= 0 && character <= 127)
		return (1);
	return (0);
}
