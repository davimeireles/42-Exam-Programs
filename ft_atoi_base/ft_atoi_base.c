/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:07:18 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/28 07:44:59 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_tolower(char c)
{
	if(c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;
}

int get_digit(char c, int digit_in_base)
{
	int max_digit;

	if(digit_in_base <= 10)
		max_digit = digit_in_base + '0';
	else
		max_digit = digit_in_base - 10 + 'a';

	if((c >= '0' && c <= '9') && c <= max_digit)
		return c - '0';
	else if((c >= 'a' && c <= 'z') && c <= max_digit)
		return 10 + c - 'a';
	else 
		return -1;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int i = 0;
	int signal = 1;
	int digit;

	if(str[i] == '-')
	{
		signal *= -1;
		i++;
	}

	while((digit = get_digit(ft_tolower(str[i]),str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * signal);
		i++;
	}
	return result;
}

/* #include<stdio.h>

int main()
{
	char *str = "123";
	int base = 8;

	printf("result: %d\n", ft_atoi_base(str,base));
} */