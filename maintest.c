/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:18:14 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/24 14:46:37 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>
#include "tests_libft.h"

int			main(void)
{
	test_memset();
	printf("\n=========================\n");
	test_memalloc();
	printf("\n=========================\n");
	test_bzero();
	printf("\n=========================\n");
	test_memcpy();
	printf("\n=========================\n");
	test_memccpy();
	printf("\n=========================\n");
	test_memmove();
	printf("\n=========================\n");
	test_memchr();
	return (0);
}
