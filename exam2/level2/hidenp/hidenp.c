/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:07:31 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/08 12:11:50 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int res;
	int i;
	int j;
	char c;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		res = 0;
		while (argv[2][i])
		{
			if (argv[2][i] == argv[1][j])
				j++;
			if (!argv[1][j])
				res = 1;
			i++;
		}
		c = res + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}