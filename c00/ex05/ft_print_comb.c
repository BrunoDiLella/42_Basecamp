/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:57:39 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/06 12:01:58 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0' - 1;
	while (comb[0]++ < '9')
	{
		comb[1] = comb[0];
		while (comb[1]++ < '9')
		{
			comb[2] = comb[1];
			while (comb[2]++ < '9')
			{
				write (1, comb, 3);
				if (comb[0] < '7')
					write (1, ", ", 2);
			}
		}
	}
}
