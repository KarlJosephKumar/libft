/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:03:25 by kakumar           #+#    #+#             */
/*   Updated: 2022/10/31 11:03:09 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{

	//ISALPHA
	/*
	int a = 123;
	int b = 135;
	int	c = 1000;
	 	if(ft_isalpha(a) == isalpha(a))
		printf("PASS\n");
	else
		printf("FAIL\n");
	*/

	//ISDIGIT
/* 
	int a = 123;
	int b = 135;
	int	c = 1000;
   if(ft_isdigit(a) == isdigit(a) && ft_isdigit(b) == isdigit(b) && ft_isdigit(c) == isdigit(c))
		printf("PASS\n");
	else
		printf("FAIL\n");
*/

	//ISALNUM
	/*
	int a = 123;
	int b = 135;
	int	c = 1000;
   if(ft_isalnum(a) == isalnum(a) && ft_isalnum(b) == isalnum(b) && ft_isalnum(c) == isalnum(c))
		printf("PASS\n");
	else
		printf("FAIL\n");
	*/

	//ISASCII
	/*
	int a = 123;
	int b = 135;
	int	c = 1000;
	if(ft_isascii(a) == isascii(a) && ft_isascii(b) == isascii(b) && ft_isascii(c) == isascii(c))
		printf("PASS\n");
	else
		printf("FAIL\n");
	*/

	//ISPRINT
/*
 	int a = 123;
	int b = 135;
	int	c = 1000;
	if(ft_isprint(a) == isprint(a) && ft_isprint(b) == isprint(b) && ft_isprint(c) == isprint(c))
		printf("PASS\n");
	else
		printf("FAIL\n");
	*/

	//STRLEN
	/*
	char *a = "\0'";
	char *b = "HELLO\t";
	char *c = NULL;
	if(ft_strlen(a) == strlen(a) && ft_strlen(b) == strlen(b) && ft_strlen(c) == strlen(c))
		printf("PASS\n");
	else
		printf("FAIL\n");
	*/
	
	//MEMSET
	char a[50] = "";
//	char	a1 = 'A';
	size_t len = 0;

	char b[50] = "HELLOOOOOOOOO\n";
	char  b1 = 'B';
	size_t len1 = 8;

	char c[50] = "WHAT IS THIS?????\n";
	char	  c1 = 'o';
	size_t len2 = 10;
	if(ft_memset(a, 1, len) == memset(a, 1, len) && ft_memset(b, b1, len1) == memset(b, b1, len) &&
		   	ft_memset(c, c1, len2) == memset(c, c1, len2))
		printf("PASS\n");
	else
		printf("FAIL\n");

	return (0);
}
