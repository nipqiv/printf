/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   u_upper.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/22 18:08:06 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/22 18:44:25 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pf_printf.h"

bool	pf_u_upper(t_conversion_in *c_in, t_conversion_out *c_out,
	va_list *argl)
{
	return (pf_u(c_in, c_out, argl));
}