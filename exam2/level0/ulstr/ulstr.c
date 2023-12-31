/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:44:49 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/08 09:53:34 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] -= 32;
				write(1,&av[1][i],1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
				write(1,&av[1][i],1);
			}
			else
				write(1,&av[1][i],1);
			i++;
		}
	}	
	write(1, "\n",1);
}