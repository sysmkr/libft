/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:27:53 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/09 18:31:02 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= 'A' && character <= 'Z')
		return (character + ('a' - 'A'));
	return (character);
}

#include <stdio.h>

int main() 
{
	printf("%c\n", ft_tolower('C'));
	printf("%c\n", ft_tolower('v'));
	printf("%c\n", ft_tolower('7'));
}
