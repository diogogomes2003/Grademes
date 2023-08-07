/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:30:27 by dduarte-          #+#    #+#             */
/*   Updated: 2023/08/07 14:46:38 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int start;
	int end;
	int i;
	int flag;
	
	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		while(i >= 0)
		{
			while(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1," ",1);
		}
	}
	write(1,"\n",1);
}
/* 
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
int main(int argc, char **argv)
{
    int     len;
    int     aux = 0;
    char    *str = NULL;
    
    if (argc == 2)
    {
        len = strlen(argv[1]);
        str = argv[1];
        while (len >= 0 && str[0] != '\0')
        {
            while (str[len] != ' ' && len != -1)
                len--;
            aux = len;
            len++;
            while (str[len] != ' ' && str[len] != '\0')
            {
                write(1, &str[len], 1);
                len++;
                if (str[aux] == '\0')
                    aux = 0;
            }
            if (aux != 0)
                write (1, " ", 1);
            len = aux - 1;
        }
    }
    write (1, "\n", 1);
    return (0);
}
*/