/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:12:32 by vpolard           #+#    #+#             */
/*   Updated: 2025/11/10 16:35:23 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	size_t	index;
	size_t 	result;
	int	sign;

	index = 0;
	result = 0;
	sign = 1;
	while (str[index] == ' ')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	while ((str[index] >= '0' && str[index] <= '9') && str[index])
	{
		result *= 10 + (str[index] - '0');
		index++;
	}
	return (result);
}
