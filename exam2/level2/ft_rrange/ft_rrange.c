/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:07:15 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/10 12:07:17 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size = (end - start);
	if (size < 0)
	{
		size *= -1;
	}
	size = size + 1;
	int *res = malloc(sizeof(int) * (size));
	if (!res)
		return NULL;
	int i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = end;
			end += 1;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			res[i] = end;
			end -= 1;
			i++;
		}
	}
	return (res);
}