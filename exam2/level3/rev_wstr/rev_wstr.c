/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:30:27 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/24 09:41:55 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int start;
	int end;
	int i;
	int flag;
	
	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		while(i >= 0)
		{
			while(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1," ",1);
		}
	}
	write(1,"\n",1);
}