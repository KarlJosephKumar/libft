/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoatest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:09:53 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/07 09:10:44 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i = -2147483648LL;
	char	*str;

	str = ft_itoa(i);
	printf("ft_itoa : %s\n", str);
	return 0;
}
