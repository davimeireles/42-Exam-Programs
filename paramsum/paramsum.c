/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:50:04 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/17 02:13:06 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put_char(char c)
{
	write(1, &c, 1);
}

void ft_mini_putnbr(int n)
{
	if (n > 9)
		ft_mini_putnbr(n / 10);
	ft_put_char(n % 10 +'0');
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	else
	{
		ft_mini_putnbr(argc - 1);
		write(1, "\n", 1);
	}
}