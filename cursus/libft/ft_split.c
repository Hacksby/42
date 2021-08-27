/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:27:44 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/26 11:27:48 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char c)
{
	int		i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			i++;
		else
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (words);
}

static char	*ft_putchars(char *word, char const *s, size_t i, size_t chars)
{
	size_t	j;

	j = 0;
	while (chars > 0)
		word[j++] = s[i - chars--];
	word[j] = '\0';
	return (word);
}

static char	**ft_free(char **split, size_t word)
{
	while (word >= 0)
		free (split[word--]);
	free (split);
	return (0);
}

static char	**ft_get_strings(char const *s, char c, size_t words, char **split)
{
	size_t	i;
	size_t	word;
	size_t	chars;

	i = 0;
	word = -1;
	chars = 0;
	while (++word < words)
	{
		chars = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			chars++;
		}
		split[word] = (char *)malloc(sizeof(*s) * chars + 1);
		if (split[word] == 0)
			return (ft_free(split, word));
		ft_putchars(split[word], s, i, chars);
	}
	split[word] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		words;

	if (!s)
		return (0);
	words = ft_count_words(s, c);
	split = (char **)malloc(sizeof(s) * words + 1);
	if (!split)
		return (0);
	return (ft_get_strings(s, c, words, split));
}
