/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:47:08 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/18 00:15:27 by bdi-lell         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = ft_strlen(str);
	write(1, str, i);
}

void	sort_str(unsigned int arr_size, char *str[])
{
	unsigned int	i;
	unsigned int	j;
	char			*tmp;

	i = -1;
	while (++i < arr_size)
	{
		j = i -1;
		while (++j < arr_size)
		{										
			if (ft_strcmp(str[i], str[j]) > 0) 
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		sort_str(argc -1, argv + 1);
		i = 0;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
		}
	}
}
