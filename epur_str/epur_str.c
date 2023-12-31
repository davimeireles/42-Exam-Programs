/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:52:16 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/27 00:09:54 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char *argv[])
{
	int j = 0;
	int flag = 0;

	if(argc == 2)
	{
		while(argv[1][j] == ' ' || argv[1][j] == '\t')
			j++;
		while(argv[1][j])
		{
			if(argv[1][j] == ' ' || argv[1][j] == '\t')
				flag = 1;
			while(argv[1][j] == ' ' || argv[1][j] == '\t')
				j++;
			while(argv[1][j] != ' ' && argv[1][j] != '\t' && argv[1][j] != '\0')
			{
				if(flag)
				{
					write(1, " ", 1);
					flag = 0;
				}
				write(1, &argv[1][j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
}