/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snatashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:14:32 by snatashi          #+#    #+#             */
/*   Updated: 2020/11/19 20:14:40 by snatashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**alloc_split(char const *s, char c)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i++] != c)
		{
			size++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (char **)malloc(sizeof(s) * (size + 2));
}

void	*free_all_split(char **split, int index)
{
	int i;

	i = 0;
	while (i < index)
		free(split[i++]);
	free(split);
	return (NULL);
}

char	**split_by_char(char **split, char const *s, char c)
{
	int				i;
	int				index;
	size_t			len;
	unsigned int	start;

	i = 0;
	index = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i++] != c)
				len++;
			if (!(split[index] = ft_substr(s, start, len)))
				return (free_all_split(split, index));
			index++;
			len = 0;
		}
		else
			i++;
	}
	split[index] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char **split;

	if (!s)
		return (NULL);
	split = alloc_split(s, c);
	if (!split)
		return (NULL);
	split = split_by_char(split, s, c);
	if (!split)
		return (NULL);
	return (split);
}
