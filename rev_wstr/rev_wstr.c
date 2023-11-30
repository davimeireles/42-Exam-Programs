/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:46:14 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/28 08:10:17 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int j = 0;
	int flag = 0;
	int start;
	int end;

	if (argc == 2)
	{
		while (argv[1][j])
			j++;

		while (j > 0)
		{
			while ((j > 0) && (argv[1][j - 1] == ' ' || argv[1][j - 1] == '\t'))
			{
				j--;
				flag = 1;
			}
			end = j;
			if (flag)
				write(1, " ", 1);
			while ((j > 0) && (argv[1][j - 1] != ' ' && argv[1][j - 1] != '\t'))
				j--;

			start = j;

			while (start < end)
			{
				flag = 0;
				write(1, &argv[1][start], 1);
				start++;
			}
		}
	}

	write(1, "\n", 1);
}