/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:22:56 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/11 18:37:36 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(long nb)
{
	long	i;

	i = 2;
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	n;

	n = nb;
	while (ft_is_prime(n) == 0)
		n++;
	return (n);
}
