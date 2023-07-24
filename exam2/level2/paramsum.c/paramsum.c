/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:05:09 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/24 14:05:55 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnumber(int n)
{
	if(n >= 10)
	{
		putnumber(n/10);
		n = n % 10;
	}
	n += 48;
	write(1, &n, 1);	
}


int main(int ac, char **av)
{	
	(void)av;
	
	int i;
	i = ac - 1;
	if(ac > 1)
		putnumber(i);
	if(ac == 1)
		write(1,"0",1);
	write(1, "\n", 1);
}