/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:39:31 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/13 16:10:29 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alphanumeric(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

int	lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !alphanumeric(str[i -1]))
		{
			if (lowercase(str[i]))
			{
				str[i] = str[i] -32;
			}
		}
		else
		{
			if (uppercase(str[i]))
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
