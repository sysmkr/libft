/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:26:01 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/11 21:32:20 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*new;

	index = 0;
	new = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (0);
	while (s[index])
	{
		new[index] = (*f)(index, s[index]);
		index++;
	}
	new[index] = '\0';
	return (new);
}
