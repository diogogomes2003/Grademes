/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:56:26 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/27 09:17:54 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i,j;
	i = 0;
	if(!s)
		return(0);
	while(s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if(s[i] == reject[j])
			{
				return(i);	
			}	
			j++;
		}
		i++;
	}
	return(i);
}