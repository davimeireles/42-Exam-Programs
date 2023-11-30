/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:41:27 by dmeirele          #+#    #+#             */
/*   Updated: 2023/11/23 21:44:02 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char left;
	unsigned char right;

	left = (octet & 0b11110000) >> 4;
	right = (octet & 0b00001111) << 4;
	
	return (left | right);
}