/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:07:32 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/24 12:23:17 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int ac, char **av)
{
	if(ac == 4)
	{
		if(av[2][0] == '+')
			printf("%i", atoi(av[1]) + atoi(av[3]));
		else if (av[2][0] == '-')
			printf("%i", atoi(av[1]) - atoi(av[3]));
		else if (av[2][0] == '*')
			printf("%i", atoi(av[1]) * atoi(av[3]));
		else if (av[2][0] == '/')
			printf("%i", atoi(av[1]) / atoi(av[3]));
		else if (av[2][0] == '%')
			printf("%i", atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
	return(0);
}