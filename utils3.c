/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:26:19 by hbay              #+#    #+#             */
/*   Updated: 2023/10/14 11:26:20 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_zero(t_struct *lc)
{
	int	i;
	int	z;

	z = 0;
	i = 0;
	while (i < lc->size_stack_a)
	{
		if (lc->stack_a[i] == 0)
		{
			z++;
		}
		i++;
	}
	if (z > 1)
	{
		error_message();
	}
}
