/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:08:06 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/27 12:59:32 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *r_array;
	int len = end - start;
	int i = 0;
	int step = 1;

	if (len < 0)
		len *= -1;

	r_array = malloc(sizeof(int) * len + 1);
	if (!r_array)
		return NULL;

	if (start < end)
		step = -1;

	while (i <= len)
	{
		r_array[i] = end;
		end = end + step;
		i++;
	}
	return r_array;
}

/* int main(int argc, char *argv[])
{
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	int *array;
	int i = end - start;

	array = ft_rrange(start, end);

	while (i >= 0)
	{
		printf("%d, ", array[i]);
		i--;
	}
}  */