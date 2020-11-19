/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snatashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:49:54 by snatashi          #+#    #+#             */
/*   Updated: 2020/11/10 14:35:51 by snatashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else if (c > 47 && c < 58)
		return (1);
	return (0);
}