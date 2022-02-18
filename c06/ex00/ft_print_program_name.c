/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:22:00 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/17 21:11:07 by bdi-lell         ###   ########.fr       */
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
	if (argc < 0)
	{
		ft_putstr("Error\n");
	}
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
