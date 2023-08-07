/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:33:22 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/07 10:33:35 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *str =(char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if(!src)
		return(0);
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}