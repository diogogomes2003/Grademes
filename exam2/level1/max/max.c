/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:55:44 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/08 10:16:46 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int max = tab[0];
	if(!tab)
		return(0);
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);

}