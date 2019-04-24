/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   f.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 20:47:14 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/22 18:10:37 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pf_printf.h"

bool	pf_f(t_conversion_in *c_in, t_conversion_out *c_out, va_list *argl)
{
	if (c_in->precision == 0)
		c_in->precision = 6;
	c_out->str = pf_ldtoa(va_arg(*argl, double), c_in->precision, &c_out->len);
	return (c_out->str != NULL);
}