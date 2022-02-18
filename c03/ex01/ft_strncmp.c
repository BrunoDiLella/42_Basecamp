/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:57:09 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/16 13:43:42 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	a1;
	unsigned char	a2;
	unsigned int	count;
	int				i;

	if (n == 0)
	{
		return (0);
	}
	count = 0;
	while (count < n && (s1[count] || s2[count]))
	{
		a1 = s1[count];
		a2 = s2[count];
		i = a1 - a2;
		if (i != 0)
		{
			return (i);
		}
		count++;
	}
	return (0);
}
