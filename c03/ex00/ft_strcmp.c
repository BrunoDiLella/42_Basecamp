/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:28:11 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/16 13:38:15 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a1;
	unsigned char	a2;
	int				i;
	int				j;

	j = 0;
	while (s1[j])
	{
		a1 = s1[j];
		a2 = s2[j];
		i = a1 - a2;
		if (i != 0)
		{
			return (i);
		}
	j++;
	}
	a1 = s1[j];
	a2 = s2[j];
	if (a1 != a2)
	{
		return (s1[j] - s2[j]);
	}
	return (0);
}
