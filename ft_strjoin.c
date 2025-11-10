/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:50:32 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 23:54:27 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		combined_length;
	size_t		index;
	size_t		common_index;
	char		*final_string;
	
	combined_length = ft_strlen(s1) + ft_strlen(s2);
	final_string = malloc(sizeof(char) * combined_length + 1);
	if (!final_string)
		return (0);
	index = 0;
	common_index = 0;
	while (s1[index])
	{
		final_string[common_index] = s1[index];
		common_index++;
		index++;
	}
	while (s2[index])
	{
		final_string[common_index] = s2[index];
		common_index++;
		index++;
	}
	final_string[common_index] = '\0';
	return (final_string);
}
