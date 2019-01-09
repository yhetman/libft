/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_whitespaces.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 22:46:53 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/01 22:46:57 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_whitespaces(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t')
		return (1);
	else
		return (0);
}