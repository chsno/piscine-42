/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:20:16 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/19 14:03:59 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_rank(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_cases(char c)
{
	if (c == ' ' || c == '\f' || c == '\v' || c == '\r' || c == '\t'
		|| c == '\n')
		return (1);
	if (c == '-' || c == '+')
		return (2);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	num;
	int	base_length;

	base_length = ft_strlen(base);
	num = 0;
	sign = 1;
	while (ft_cases(*str) == 1)
		++str;
	while (ft_cases(*str) == 2)
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (get_rank(*str, base) < base_length)
	{
		num = (num * base_length) + (get_rank(*str, base));
		++str;
	}
	return (num * sign);
}
