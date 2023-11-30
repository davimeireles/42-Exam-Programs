/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 06:57:32 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/28 07:06:04 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int j = 0;
	
	if(argc == 2)
	{
		while (argv[1][j])
		{
			if(argv[1][j] == '_')
			{
				j++;
				argv[1][j] = argv[1][j] - 32;
			}
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}