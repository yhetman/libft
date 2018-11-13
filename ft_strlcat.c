/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:25:01 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/27 18:37:55 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict srce, size_t size)
{
	size_t	srce_len;
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = 0;
	srce_len = ft_strlen(dest);
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (size + ft_strlen(srce));
	while (srce[i] && i < (size - srce_len - 1))
	{
		dest[dest_len + i] = ((char *)srce)[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(srce));
}
