/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:23:05 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/27 11:36:08 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putnumber(int number)
{
	char str[10] = "0123456789";

	if(number > 9)
		ft_putnumber(number/10);
	write(1, &str[number % 10], 1);
}

int main(int argc, char *argv[])
{
	int i = 1;
	if(argc == 1 && argv)
	{
		while(i <= 100)
		{
			if(i%3 == 0 && i%5 == 0)
				write(1, "fizzbuzz", 8);
			else if(i%3 == 0)
				write(1, "fizz", 4);
			else if(i%5 == 0)
				write(1, "buzz", 4);
			 else
				ft_putnumber(i);
			write(1, "\n", 1);
			i++;
		}
	}
}