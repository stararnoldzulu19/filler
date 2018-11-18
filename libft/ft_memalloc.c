/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:46:30 by azulu             #+#    #+#             */
/*   Updated: 2018/09/11 10:46:33 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t x)
{
	char	*s;

	s = (char *)malloc(x);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (int)x);
	return ((void *)s);
}
