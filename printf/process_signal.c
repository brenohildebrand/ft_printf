/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:24:33 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/18 18:50:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	process_signal(
	t_conversion_specification *specs,
	t_buffer *conversion_buffer
){
	if (
		specs->conversion_specifier != 'd' && \
		specs->conversion_specifier != 'i')
		return (SUCCESS);
	if (
		((specs->flags & (1 << 4)) != 0) && \
		conversion_buffer->content[0] != '-')
		prepend_character_to_buffer(conversion_buffer, '+');
	return (SUCCESS);
}
