/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:18:14 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/23 14:29:24 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

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
	return (0);
}
