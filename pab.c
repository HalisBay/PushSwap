/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:25:44 by hbay              #+#    #+#             */
/*   Updated: 2023/10/14 11:25:45 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_zero(int lena, t_struct *lc)
{
	int	i;

	i = 0;
	lc->stack_b[0] = lc->stack_a[0];
	while (lc->stack_a[i])
	{
		lc->stack_a[i] = lc->stack_a[i + 1];
		if (i == lena -1)
			break ;
		i++;
	}
	lc->stack_a[lena -1] = 0;
}

void	pb_multi(int lena, int lenb, t_struct *lc)
{
	int	i;

	i = 0;
	while (lc->stack_b[lenb -1])
	{
		lc->stack_b[lenb] = lc->stack_b[lenb -1];
		if (lenb -1 == 0)
			break ;
		lenb--;
	}
	lc->stack_b[0] = lc->stack_a[0];
	while (lc->stack_a[i + 1])
	{
		lc->stack_a[i] = lc->stack_a[i + 1];
		if (i == lena -1)
			break ;
		i++;
	}
	lc->stack_a[i] = 0;
}

void	pas(int lena, int lenb, t_struct *lc)
{
	int	i;

	i = 0;
	while (lc->stack_a[lena -1])
	{
		lc->stack_a[lena] = lc->stack_a[lena -1];
		if (lena -1 == 0)
			break ;
		lena--;
	}
	lc->stack_a[0] = lc->stack_b[0];
	while (lc->stack_b[i + 1])
	{
		lc->stack_b[i] = lc->stack_b[i + 1];
		if (i == lenb -1)
			break ;
		i++;
	}
	lc->stack_b[i] = 0;
}
