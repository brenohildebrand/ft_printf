/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conversion_specification.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:21 by bhildebr          #+#    #+#             */
/*   Updated: 2023/09/18 18:56:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	parse_conversion_specification(
	const char *formatted_string,
	int *i,
	t_conversion_specification *specs
){
	if (parse_flags(formatted_string, i, specs) == ERROR)
		return (ERROR);
	if (parse_minimum_field_width(formatted_string, i, specs) == ERROR)
		return (ERROR);
	if (parse_precision(formatted_string, i, specs) == ERROR)
		return (ERROR);
	if (parse_conversion_specifier(formatted_string, i, specs) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
