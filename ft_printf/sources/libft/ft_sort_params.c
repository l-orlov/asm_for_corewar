/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:38:34 by pnita             #+#    #+#             */
/*   Updated: 2019/04/26 20:40:22 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_params(char **str)
{
	char **p;
	char **c;

	p = str;
	c = str;
	while (*(p + 1) != '\0')
	{
		if (ft_strcmp(*p, *(p + 1)) > 0)
		{
			*c = *p;
			*p = *(p + 1);
			*(p + 1) = *c;
			p = str;
		}
		p++;
	}
}