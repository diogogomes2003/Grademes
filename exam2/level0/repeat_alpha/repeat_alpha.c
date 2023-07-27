/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:47:55 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/27 11:01:43 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar_fd(char s,int fd)
{
	while(fd > 0)
	{
		write(1, &s, 1);
		fd--;
	}
}
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				putchar_fd(av[1][i], av[1][i] - 'A' + 1);
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
				putchar_fd(av[1][i], av[1][i] - 'a' + 1);
			else
				write(1,&av[1][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
}