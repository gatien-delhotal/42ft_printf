/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:01:11 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/07 20:43:55 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*res;
	char	*src_cast;

	res = (char *) dest;
	src_cast = (char *) src;
	if (n == 0 || (dest == 0 && src == 0))
		return (dest);
	i = -1;
	while (++i < n)
		res[i] = src_cast[i];
	return (dest);
}