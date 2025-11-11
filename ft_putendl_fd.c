/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:41:44 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/11 21:43:30 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl_fd(char *s, int fd)
{
	size_t	index;
	char	nl;

	index = 0;
	nl = '\n';
	while (s[index])
	{
		write(fd, &s[index], 1);
		index++;
	}
	write(fd, &nl, 1);
}
