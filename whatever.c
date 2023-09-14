/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:20:39 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/13 20:24:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	main(void)
{
	int	flags;

	flags = 0;
	flags |= 1 << 2;

	printf("[0] = %d\n", flags & (1 << 0));
	printf("[1] = %d\n", flags & (1 << 1));
	printf("[2] = %d\n", flags & (1 << 2));

	return (0);
}