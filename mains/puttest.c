/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puttest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:55:17 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/26 10:40:58 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "Helloo there.";
	char a = 'a';
	int i = 2147483647;
	int fd = 1;

	ft_putchar_fd(a, fd);
	printf("\n");
	printf("\n");
	ft_putstr_fd(str, fd);
	printf("\n");
	printf("\n");
	ft_putendl_fd(str, fd);
	printf("\n");
	ft_putnbr_fd(i, fd);
	return 0;
}
