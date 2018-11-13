/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:46:47 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/30 15:46:52 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_whitespaces(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	length;

	i = -1;
	if (!(s))
		return (NULL);
	length = ft_strlen(s) - 1;
	while (find_whitespaces(s[++i]))
		;
	while (length > i && find_whitespaces(s[length]))
		length--;
	if (length < i)
		return (str = ft_strdup(""));
	return (str = ft_strsub(s, i, length - (size_t)i + 1));
}
