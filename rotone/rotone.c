/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:21:50 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/26 23:35:38 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char *argv[])
{
	int j = 0;

	if(argc == 2)
	{
		while(argv[1][j])
		{
			if((argv[1][j] >= 'a' && argv[1][j] <= 'y') || (argv[1][j] >= 'A' && argv[1][j] <= 'Y'))
				argv[1][j] = argv[1][j] + 1;
			else if(argv[1][j] == 'z')
				argv[1][j] = 'a';
			else if(argv[1][j] == 'Z')
				argv[1][j] = 'A';
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}