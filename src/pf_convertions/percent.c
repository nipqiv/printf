/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   percent.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 20:47:24 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/22 18:10:39 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pf_printf.h"

bool	pf_percent(t_conversion_in *c_in, t_conversion_out *c_out, va_list *argl)
{
	c_out->len = 1;
	c_out->str = TAKE_MULTI(char, 2, "pf_s");
	c_out->str[0] = '%';
	return (true);
}