/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:57:42 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/06 12:02:04 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	comb[5];
	char	renumb;

	comb[2] = ' ';
	comb[0] = '0' - 1;
	while (comb[0]++ < '9')
	{
		comb[1] = '0' - 1;
		while (comb[1]++ < '9')
		{
			comb[3] = comb[0] - 1;
			renumb = comb[1];
			while (comb[3]++ < '9')
			{
				comb[4] = renumb;
				renumb = '0' - 1;
				while (comb[4]++ < '9')
				{
					write (1, comb, 5);
					if (comb[0] != '9' || comb[1] != '8')
						write (1, ", ", 2);
				}
			}
		}
	}
}
