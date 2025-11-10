/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:01:57 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/09 18:19:37 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= 'a' && character <= 'z')
		return (character - ('a' - 'A'));
	return (character);
}
