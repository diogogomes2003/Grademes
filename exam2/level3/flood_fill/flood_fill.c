/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:42:15 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/27 10:45:42 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_point
{
    int           x;
	int           y;
}               t_point;

void	fill(char **tab, t_point size, int x, int y, char to_fill)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return ;
	if (tab[y][x] != to_fill)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x - 1, y, to_fill);
	fill(tab, size, x + 1, y, to_fill);
	fill(tab, size, x, y - 1, to_fill);
	fill(tab, size, x, y + 1, to_fill);
}