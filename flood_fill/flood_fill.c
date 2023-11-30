/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:12:35 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/27 00:24:52 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int x;
	int y;
} t_point;

void fill_area(char **tab, t_point size, t_point current, char color)
{
	if (current.x < 0 || current.y < 0 || current.x >= size.x || current.y >= size.y || tab[current.y][current.x] != color)
		return;

	tab[current.y][current.x] = 'F';
	fill_area(tab, size, (t_point){current.x + 1, current.y}, color);
	fill_area(tab, size, (t_point){current.x - 1, current.y}, color);
	fill_area(tab, size, (t_point){current.x, current.y + 1}, color);
	fill_area(tab, size, (t_point){current.x, current.y - 1}, color);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill_area(tab, size, begin, tab[begin.y][begin.x]);
}