/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:45:34 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/26 20:52:24 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *header;
	int data_helper;
	
	header = lst;
	while(lst->next)
	{
		if(cmp(lst->data,lst->next->data) == 0)
		{
			data_helper = lst->data;
			lst->data = lst->next->data;
			lst->next->data = data_helper;
			lst = header;
		}
		else
			lst = lst->next;
	}
	return header;
}