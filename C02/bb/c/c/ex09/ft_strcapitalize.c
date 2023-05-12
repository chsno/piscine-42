/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:44:16 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/14 08:47:26 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putmaj(int i, char prev)
{
	if (i == 0)
		return (32);
	else if (prev >= 0 && prev <= 47)
		return (32);
	else if (prev >= 58 && prev <= 64)
		return (32);
	else if (prev >= 91 && prev <= 96)
		return (32);
	else if (prev >= 123)
		return (32);
	return (0);
}

int	ft_putmin(int i, char prev)
{
	if (i == 0)
		return (0);
	else if (prev >= 'a' && prev <= 'z')
		return (32);
	else if (prev >= 'A' && prev <= 'Z')
		return (32);
	else if (prev >= '0' && prev <= '9')
		return (32);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ft_putmin(i, str[i - 1]);
		}	
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ft_putmaj(i, str[i - 1]);
	i++;
	}
	return (str);
}
