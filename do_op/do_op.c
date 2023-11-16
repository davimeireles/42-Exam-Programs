/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:14:20 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/16 20:49:28 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int do_op(int num1, char op, int num2)
{
	if (op == '+')
		return (num1 + num2);
	if (op == '-')
		return (num1 - num2);
	if (op == '*')
		return (num1 * num2);
	if (op == '/')
		return (num1 / num2);
	if (op == '%')
		return (num1 % num2);
}

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 4)
	{
		result = do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
		printf("%d\n", result);
	}
	else
		printf("\n");
	return 0;
}