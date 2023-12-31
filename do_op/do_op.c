/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:59 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/26 20:08:02 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void do_op(int n1, char op, int n2)
{
	if(op == '+')
		printf("%d",n1 + n2);
	else if(op == '-')
		printf("%d",n1 - n2);
	else if(op == '*')
		printf("%d",n1*n2);
	else if(op == '/')
		printf("%d",n1/n2);
	else if(op == '%')
		printf("%d",n1%n2);
}

int main(int argc, char *argv[])
{
	if(argc == 4)
		do_op(atoi(argv[1]),argv[2][0],atoi(argv[3]));
	printf("\n");
}