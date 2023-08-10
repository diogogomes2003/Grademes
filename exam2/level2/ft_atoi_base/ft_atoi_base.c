/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:26:27 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/10 12:26:29 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	if (str_base < 2 || str_base > 16)
		return (0);
	int res = 0;
	int sign = 1;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		int c = 0;
		if (*str >= '0' && *str <= '9')
			c = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			c = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			c = *str - 'A' + 10;
		else
			break;
		if (c >= str_base)
			break;
		res = res * str_base + c;
		str++;
	}
	return (sign * res);
}