/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testmain.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/09 17:31:35 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/09 19:34:49 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

static inline void set_res_str_len(t_conversion_input *inp, int *i, uint64_t *value)
{
	*i = 0;
	*value = inp->int_value;
	if (value == 0)
		*i = 1;
	else
		while (*value > 0)
		{
			*value /= 10;
			*i += 1;
		}
}

t_bool	convert_int_base_10_unsigned(t_conversion_result *res, t_conversion_input *inp)
{
	char		*character_set;
	uint64_t	value;
	int			i;

	set_res_str_len(inp, &i, &value);
	res->len = i;
	res->str = TAKE_MULTI(char, i + 1, "convert_int_base_10_unsigned");
	if (res->str == NULL)
		return (FALSE);
	i--;
	value = inp->int_value;
	while (i >= 0)
	{
		res->str[i] = value % 10 + '0';
		value /= 10;
		i--;
	}
	return (TRUE);
}

int main()
{
	t_conversion_result res;
	t_conversion_input	input;
	
	input.int_value = 4000;
	convert_int_base_10_unsigned(&res, &input);
	printf("%s", res.str);
	// int64_t x = -9223372036854775808LL;
	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("hello %lld\n", x);
	// 	x--;
	// 	i++;
	// }
	// return (0);
}