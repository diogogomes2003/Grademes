/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:06:58 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/03 11:06:59 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	else if( n % 2 == 0)
		return(1);
	else if (n == 1)
		return(1);
	return(0);

}
