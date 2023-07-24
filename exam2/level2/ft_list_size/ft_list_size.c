/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:23:27 by dduarte-          #+#    #+#             */
/*   Updated: 2023/07/24 09:27:47 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int i;
	i = 0;
	
	if(!begin_list)
		return(0);
	while(begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return(i);
}