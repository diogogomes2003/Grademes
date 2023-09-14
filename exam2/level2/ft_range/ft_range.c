/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:16:40 by dduarte-          #+#    #+#             */
/*   Updated: 2023/09/13 10:16:41 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     *ft_range(int start, int end)
{
	int i = 0;
	int size = (end - start + 1);
	if (size < 0)
		size *= -1;
	int *range = malloc(sizeof(int) * size);
	if (!range)
		return(0);
	if(start > end)
	{
		while(start >= end)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		while(start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	return(range);
}