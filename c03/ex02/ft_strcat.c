/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:40:18 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/16 13:45:18 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size;

	size = 0;
	while (dest[size])
	{
		size++;
	}
	while (*src != '\0')
	{
		dest[size] = *src;
		size++;
		src++;
	}
	dest[size] = '\0';
	return (dest);
}
