/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:43:28 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/16 14:17:49 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_match(char *str, char *target)
{
	int	match;
	int	find_pos;

	match = 0;
	find_pos = 0;
	while (target[find_pos] != '\0')
	{
		if (target[find_pos] != str[find_pos])
		{
			match = 0;
			find_pos++;
			break ;
		}
		else
		{
			match = 1;
			find_pos++;
		}
	}
	return (match);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (*str++)
	{
		size++;
	}
	return (size);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		match;
	char	*m_start;

	i = 0;
	match = 0;
	if (ft_strlen(to_find) == 0)
	{
		return (str);
	}
	while (str[i])
	{
		m_start = &str[i];
		match = str_match(m_start, to_find);
		if (match)
		{
			return (m_start);
		}
		i++;
	}
	return (0);
}
