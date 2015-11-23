/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:18:14 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/23 16:30:30 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>

void		test_memccpy(void)
{
	char	*src = "abcdefghi";
	char	*dst_test;
	char	*dst_true;
	char	*ret_test;
	char	*ret_true;

	printf("\nTesting ft_memccpy\n");
	dst_test = (char *)malloc(10);
	dst_true = (char *)malloc(10);
	dst_test[9] = '\0';
	dst_true[9] = '\0';
	ft_memset(dst_test, 'b', 9);
	ft_memset(dst_true, 'b', 9);
	ret_test = ft_memccpy(dst_test, src, 'd', 9);
	ret_true = memccpy(dst_true, src, 'd', 9);
	printf("%-20s %-20s %-20s\n%-20s %-20s %-20s\n", "Expected result:", dst_true,
			ret_true, "Actual Result:", dst_test, ret_test);
	ret_test = ft_memccpy(dst_test, src, 'z', 9);
	ret_true = memccpy(dst_true, src, 'z', 9);
	printf("%-20s %-20s %-20s\n%-20s %-20s %-20s\n", "Expected result:", dst_true,
			ret_true, "Actual Result:", dst_test, ret_test);
	free(dst_test);
	free(dst_true);
}

void		test_memcpy(void)
{
	char	*src = "aaaaaaaaa";
	char	*dst_test;
	char	*dst_true;

	printf("\nTesting ft_memcpy\n");
	dst_test = (char *)malloc(10);
	dst_true = (char *)malloc(10);
	dst_test[9] = '\0';
	dst_true[9] = '\0';
	ft_memset(dst_test, 'b', 9);
	ft_memset(dst_true, 'b', 9);
	ft_memcpy(dst_test, src, 3);
	memcpy(dst_true, src, 3);
	printf("%-20s %s\n%-20s %s\n",
			"Expected result:", dst_true, "Actual Result:", dst_test);
	ft_memcpy(dst_test, src, 8);
	memcpy(dst_true, src, 8);
	printf("%-20s %s\n%-20s %s\n",
			"Expected result:", dst_true, "Actual Result:", dst_test);
	free(dst_test);
	free(dst_true);
}

void		test_bzero(void)
{
	char 	*str;

	printf("\nTesting ft_bzero\n");
	str = (char *)malloc(10);
	str[9] = '\0';
	str = ft_memset(str, 'a', 9);
	ft_bzero(str, 0);
	printf("%-20s a a a a a a a a a \\0 \n%-20s ",
			"Expected result:", "Actual result:");
	for (int i = 0; i < 10; i++)
	{
		if (str[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", str[i]);
	}
	ft_bzero(str, 4);
	printf("\n%-20s \\0 \\0 \\0 \\0 a a a a a \\0 \n%-20s ",
			"Expected result:", "Actual result:");
	for (int i = 0; i < 10; i++)
	{
		if (str[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", str[i]);
	}
	printf("\n");
}

void		test_memset(void)
{
	char *str;

	printf("\nTesting ft_memset\n");
	str = (char *)malloc(10);
	str[9] = '\0';
	str = ft_memset(str, 'a', 9);
	printf("%-20s %-20s\n%-20s %-20s\n", "Expected result:", "aaaaaaaaa", "Actual result:", str);
	str = ft_memset(str, 'D', 3);
	str = ft_memset(str, 'z', 0);
	printf("\n%-20s %-20s\n%-20s %-20s\n", "Expected result:", "DDDaaaaaa", "Actual result:", str);
}

void		test_memdel(void *ptr)
{
	printf("\nTesting ft_memdel\n");
	ft_memdel(&ptr);
	if (ptr != NULL)
	   printf("Memory wasn't free properly\n");
	else
		printf("Memory is clean\n");
}

void		test_memalloc(void)
{
	char *str;

	printf("\nTesting ft_memalloc\n");
	str = (char *)ft_memalloc(3);
	if (!str)
	{
		printf("Allocation failed\n");
		return ;
	}
	str[0] = 'Y';
	str[1] = 'o';
	str[2] = '\0';
	printf("%-20s %-6s\n%-20s %-6s\n", "Expected result:", "Yo", "Actual result:", str);
	test_memdel(str);
}

int			main(void)
{
	test_memset();
	test_memalloc();
	test_bzero();
	test_memcpy();
	test_memccpy();
	return (0);
}
