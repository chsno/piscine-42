/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:44:25 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/14 09:34:18 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (to_find[0] == '\0')
			return (str);
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
