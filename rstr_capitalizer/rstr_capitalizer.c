/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:08:54 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/26 20:44:20 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int is_alpha(char c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	return 0;
}

char *str_lower(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return str;
}

int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	if(argc == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	
	while(argv[i])
	{
		argv[i] = str_lower(argv[i]);
		j = 0;
		while(argv[i][j])
		{
			while(argv[i][j] == ' ' || argv[i][j] == '\t')
				j++;
 			while(argv[i][j] != ' ' && argv[i][j] != '\t' && argv[i][j] != '\0')
			{
			 	if(is_alpha(argv[i][j]) && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1]  == '\0'))
					argv[i][j] = argv[i][j] - 32;
				j++;
			}
		}
		j  = 0;
		while(argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}