/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:48:54 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/07 09:51:56 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int ac, char **av)
{
	int nbr;
	int nbr2;
	if(ac == 3)
	{
		if((nbr = atoi(av[1])) > 0 && (nbr2=atoi(av[2])) > 0)
		{
			while(nbr != nbr2)
			{
				if(nbr > nbr2)
					nbr-=nbr2;
				else
					nbr2 -= nbr;
			}
			printf("%i", nbr);
		}
	}
	printf("\n");
	return(0);
}