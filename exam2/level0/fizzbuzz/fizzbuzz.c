/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:13:38 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/04 09:21:08 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnumber(int n)
{
	if(n > 9)
		putnumber(n / 10);
	n = n % 10 + 48;
	write(1, &n, 1);
}
int main()
{
	int i = 1;

	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnumber(i);
		write(1, "\n", 1);
		i++;
	}
}