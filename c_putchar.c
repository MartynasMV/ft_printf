/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_putchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:48:29 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 09:48:30 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	c_putchar(char c, int counter)
{
	write(1, &c, 1);
	counter++;
	return (counter);
}
