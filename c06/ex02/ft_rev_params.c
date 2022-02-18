/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:34:28 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/17 21:16:07 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = ft_strlen(str);
	write(1, str, i);
}

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
	argc--;
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
}
