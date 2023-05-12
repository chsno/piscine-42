/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:42:23 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/15 09:45:36 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*str == '\0' && *to_find == '\0')
		return ("");
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
