/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_d_conversion_specification_to_buffer.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:56:40 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/13 18:00:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	add_d_conversion_specification_to_buffer(
	t_buffer *buffer,
	va_list *args,
	t_conversion_specification *specs
){
	int		arg;
	char	*string;

	arg = va_arg(*args, int);
	string = ft_int_itoa_base(arg, DEC_BASE);
	if (string == NULL)
		return (ERROR);
	if (add_string_to_buffer(buffer, string) == ERROR)
		return (ERROR);
	free(string);
	return (SUCCESS);
}