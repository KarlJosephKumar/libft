/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoitest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:27:25 by kakumar           #+#    #+#             */
/*   Updated: 2022/11/05 10:35:42 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>

int	main(void)
{	
	printf("%i", atoi("+\t\v\f\r\n \f1234"));
	printf("\n");
	printf("%i", ft_atoi("+\t\v\f\r\n \f1234"));

	return (0);
}
