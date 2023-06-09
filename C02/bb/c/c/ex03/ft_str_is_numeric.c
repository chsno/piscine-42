/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:05:42 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/09 10:07:24 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[0] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		str++;
	}
	return (1);
}
