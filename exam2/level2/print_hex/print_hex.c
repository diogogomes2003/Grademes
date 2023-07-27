/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:52:45 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/27 12:57:24 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_hex(int n)
{
	int		i;
	char	c;
	char	*base = "0123456789abcdef";
	
	if (n > 16)
		ft_putnbr_hex(n / 16);
	i = n % 16;
	c = base[i];
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		ft_putnbr_hex(n);
	}
	write(1, "\n", 1);
}