/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:36:40 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/27 12:06:24 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int start;
	int end;
	if(argc == 2)
	{
			while(argv[1][i])
				i++;
			while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
				i--;
			end = i;
			while(argv[1][i] != ' ' && argv[1][i] != '\t' && i > 0)
				i--;
			start = i;
			if(argv[1][start] == ' ' || argv[1][start] == '\t')
				start++;
			while(start <= end)
			{
				 write(1, &argv[1][start], 1);
				 start++;
			}
	}
	write(1, "\n", 1);
}