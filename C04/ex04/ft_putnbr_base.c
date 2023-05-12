/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:39:17 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/11 14:32:11 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	display_number_base(int nbr, char *base, unsigned int size_base)
{
	unsigned int	nbr_absolute;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else
		nbr_absolute = nbr;
	if (nbr_absolute >= size_base)
	{
		display_number_base(nbr_absolute / size_base, base, size_base);
		display_number_base(nbr_absolute % size_base, base, size_base);
	}
	if (nbr_absolute < size_base)
		ft_putchar(base[nbr_absolute % size_base]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_is_valid_base(base) == 1)
		display_number_base (nbr, base, ft_strlen(base));
}
