/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:35:56 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/20 16:55:12 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	determine_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && determine_separator(str[i], charset))
				i++;
		if (str[i] != '\0')
				count++;
		while (str[i] != '\0' && !determine_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_len_separator(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !determine_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = ft_len_separator(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **) malloc(sizeof(char *)
			* (count_words(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && determine_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !determine_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
