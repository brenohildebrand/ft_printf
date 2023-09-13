/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_percentage_conversion_specification_to_        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:01:19 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/12 23:17:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	add_percentage_conversion_specification_to_buffer(
	t_buffer *buffer,
	va_list *args,
	t_conversion_specification *specs
){
	add_character_to_buffer(buffer, '%');
	return (SUCCESS);
}