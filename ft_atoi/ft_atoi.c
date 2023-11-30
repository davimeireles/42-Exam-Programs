/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:37:02 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/26 23:43:59 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int signal = 1;
	int result = 0;
	
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '-'  || str[i] == '+')
	{
		if(str[i] == '-')
			signal = signal * -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signal);
}
