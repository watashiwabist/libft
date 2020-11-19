/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snatashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:12:37 by snatashi          #+#    #+#             */
/*   Updated: 2020/11/19 15:50:41 by snatashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*last;

	last = NULL;
	p = (char *)s;
	if (!*p && *p == c)
		return (p);
	while (*p)
	{
		if (*p == c)
			last = p;
		p++;
		if (*p == c)
			last = p;
		if (!*p)
			return (last);
	}
	return (0);
}
