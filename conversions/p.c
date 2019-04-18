/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 20:47:20 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/18 12:45:11 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

bool	pf_p(t_conversion_in *c_in, t_conversion_out *c_out, va_list *argl)
{
	char *temp;

	c_out->str = pf_uitoa_base(va_arg(*argl, unsigned int), 16, &c_out->len, true);
	if (c_out->str == NULL)
		return (NULL);
	temp = TAKE_MULTI(char, 2 + c_out->len + 1, "pf_p");
	if (temp == NULL)
		return (NULL);
	ft_strcpy(temp, (const char *)"0x");
	ft_strcpy(temp + 2, (const char *)c_out->str);
	GIVE(c_out->str, "pf_p");
	c_out->str = temp;
	c_out->len += 2;
	return (true);
}