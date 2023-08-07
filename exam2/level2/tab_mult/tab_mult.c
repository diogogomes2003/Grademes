/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:35:43 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/07 11:31:09 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putnumber(int n)
{
	if(n > 9)
		putnumber(n/10);
	n = n % 10 + 48;
	write(1,&n,1);
}


int ft_atoi(char *str)
{
	int i;
	int j;
	int c;
	i = 0;
	j = 1;
	c = 0;

	while(str[i] ==  ' ' || str[i] == '\t')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			j *= -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		c = (c * 10) + (str[i] - 48);
		i++;
	}
	c *= j;
	return(c);
	
}

int main(int ac,char **av)
{
	int i = 1;
	int c,n;
	if (ac == 2)
	{
		if(av[1][0] != '-')
		{
			n = ft_atoi(av[1]);
			while(i < 10)
			{
				c = 0;
				putnumber(i);
				write(1," x ",3);
				putnumber(n);	
				write(1," = ",3);
				c = i * n;
				putnumber(c);
				write(1,"\n",1);
			i++;
			}	
		}

	}
	else
		write(1,"\n",1);
}