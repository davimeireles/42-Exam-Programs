/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:47:30 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/23 21:52:11 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while(begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return i;
}