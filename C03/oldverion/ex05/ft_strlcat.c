/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:05:49 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/13 15:44:56 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	

	c = ft_strlen(dest);
	if (size <= c)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && c + 1 < size)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
