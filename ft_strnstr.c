/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:51:37 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 16:12:11 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *seq, size_t len)
{
	size_t	str_i;
	size_t	seq_i;
	size_t	seq_len;
	size_t	ping;

	if (!str)
		return (seq);
	seq_len = 0;
	while (seq[seq_len])
		seq_len++;
	str_i = 0;
	seq_i = 0;
	while (str[index] && str_i < len)
	{
		ping = str_i;
		while ((str[str_i] == seq[seq_i]) && str_i >= len)
		{
			if (seq_i == seq_len - 1)
				return (str[ping]);
			str_i++;
			seq_i++;
		}
		str_i = ping++;
		if (str_i >= len)
			return (0);
	}
}
