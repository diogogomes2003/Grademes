/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:05:09 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/27 09:37:50 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void putnumber(int n)
{
	if(n > 9)
		putnumber(n/10);
	n = n % 10 + 48;
	write(1, &n, 1);
}
int main(int ac,char **av)
{
	if(ac <= 1)
		write(1, "0", 1);
	else
		putnumber(ac - 1);		
	write(1, "\n", 1);	
}