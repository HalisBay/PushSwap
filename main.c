/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:25:27 by hbay              #+#    #+#             */
/*   Updated: 2023/10/14 11:25:28 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_struct	*lc;

	lc = malloc(sizeof(t_struct));
	if (argc <= 1)
		exit(0);
	args_control(lc, argv);
	mini_sort(lc);
}
