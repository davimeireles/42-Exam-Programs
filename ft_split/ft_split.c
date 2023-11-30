/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:33:18 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/27 14:54:40 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int count_words(char *str)
{
	int i = 0;
	int cw = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			cw++;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	return cw;
}

char    **ft_split(char *str)
{
	char **out;
	int i = 0;
	int j = 0;
	int k = 0;	

	out = malloc(sizeof(char *) * (count_words(str) + 1));
	if(!out)
		return NULL;

	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if(i > j)
		{
			out[k] = malloc(sizeof(char) * (i - j) + 1);
			ft_strncpy(out[k++],&str[j],i-j);
		}
	}
	out[k] = NULL;
	return out;
}
