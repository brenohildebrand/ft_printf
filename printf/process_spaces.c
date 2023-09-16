/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:39:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/16 13:45:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	process_spaces(t_conversion_specification *specs, t_buffer *conversion_buffer)
{
	// space influencia
	// dash influencia
	// field width influencia
	int	i;

	if (SPACE_IS_ON(specs->flags) && conversion_buffer->content[0] != '-')
		prepend_character_to_buffer(conversion_buffer, ' ');
	if (specs->minimum_field_width > conversion_buffer->current_length)
	{
		i = specs->minimum_field_width - conversion_buffer->current_length;
		if (DASH_IS_ON(specs->flags))
		{
			while (i--)
				append_character_to_buffer(conversion_buffer, ' ');
		}
		else
		{
			while (i--)
				prepend_character_to_buffer(conversion_buffer, ' ');
		}
	}

	return (SUCCESS);	
}