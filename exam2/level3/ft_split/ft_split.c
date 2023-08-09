/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:43:23 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/08 10:37:40 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    **ft_split(char *str)
{
    char **split;
    int i = 0;
    int row = 0;
    int colum;

    split = malloc(sizeof (char*) * 256);
    if(!split)
        return 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] =='\n')
        i++;
    while(str[i] != '\0')
    {
        colum = 0;
        split[row] = malloc(sizeof (char) * 4000);
        if(!split[row])
            return 0;
        while(str[i] != ' ' && str[i] != '\t' && str[i] !='\n' && str[i])
        {
            split[row][colum] = str[i];
            colum++;
            i++;
        }
        split[row][colum] = '\0';
        while (str[i] == ' ' || str[i] == '\t' || str[i] =='\n')
            i++;
        row ++;
    }
    split[row] = NULL;
    return(split);
}