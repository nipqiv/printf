/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 20:47:06 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/25 14:44:29 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pf_printf.h"

bool	pf_c(t_conversion_in *c_in, t_conversion_out *c_out, va_list *argl)
{
	char x;

	x = va_arg(*argl, int);
	c_out->str = TAKE_MULTI(char, 2, "pf_c");
	if (c_out->str == NULL)
		return (false);
	c_out->len = 1;
	c_out->str[0] = x;
	return (true);
}