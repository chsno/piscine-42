/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+    i
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:39:52 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/16 18:42:55 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cases(char c)
{
	if (c == ' ' || c == '\f' || c == '\v' || c == '\r' || c == '\t'
		|| c == '\n')
		return (1);
	if (c == '-' || c == '+')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_cases(str[i]) == 1)
		i++;
	while (ft_cases(str[i]) == 2)
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_cases(str[i]) == 3)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
} 
