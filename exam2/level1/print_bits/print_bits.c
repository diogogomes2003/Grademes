/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:19:02 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/24 09:21:55 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	
	i = 128;
	while(i > 0)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1,"0",1);
		i >>= 1;
	}	
}