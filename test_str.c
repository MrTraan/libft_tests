/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:18:16 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/24 16:24:41 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

void	test_strncpy(void)
{
	char	*s1 = "Je suis la copie";
	char	*s1_true;
	char	*s2_true;
	char	*true_ret;
	char	*s1_test;
	char	*s2_test;
	char	*test_ret;

	printf("\nTesting ft_strncpy\n");
	s1_true = malloc(20);
	s2_true = malloc(20);
	s1_test = malloc(20);
	s2_test = malloc(20);
	s1_true[19] = 'a';
	s1_test[19] = 'a';
	true_ret = strncpy(s1_true, s1, 20);
	test_ret = ft_strncpy(s1_test, s1, 20);
	strncpy(s2_true, s1, 0);
	ft_strncpy(s2_test, s1, 0);
	printf("%-20s %-20s %-20s %-20s\n%-20s %-20s %-20s %-20s\n",
			"Expected result:", s1_true, true_ret, s2_true,
				"Actual result:", s1_test, test_ret, s2_test);
	free(s1_true);
	free(s2_true);
	free(s1_test);
	free(s2_test);
}

void	test_strcpy(void)
{
	char	*s1 = "Je suis la copie";
	char	*s_true;
	char	*true_ret;
	char	*s_test;
	char	*test_ret;

	printf("\nTesting ft_strcpy\n");
	s_true = malloc(20);
	s_test = malloc(20);
	s_true[19] = 'a';
	s_test[19] = 'a';
	true_ret = strcpy(s_true, s1);
	test_ret = ft_strcpy(s_test, s1);
	printf("%-20s %-20s %-20s\n%-20s %-20s %-20s\n",
			"Expected result:", s_true, true_ret,
				"Actual result:", s_test, test_ret);
	free(s_true);
	free(s_test);
}

void	test_strlen(void)
{
	char *s1 = "je suis tres long";
	char *s2 = "court";
	char *s3 = "";

	printf("\nTesting ft_strlen\n");
	printf("%-20s %-10lu %-10lu %-10lu\n%-20s %-10lu %-10lu %-10lu\n",
			"Expected result:", strlen(s1), strlen(s2), strlen(s3),
				"Actual result:", ft_strlen(s1), ft_strlen(s2), ft_strlen(s3));
}

void	test_strdup(void)
{
	char	*s1 = "copy me please";
	char	*s2 = "";
	char	*true_s1;
	char	*true_s2;
	char	*test_s1;
	char	*test_s2;

	printf("\nTesting ft_strdup\n");
	true_s1 = strdup(s1);
	true_s2 = strdup(s2);
	test_s1 = ft_strdup(s1);
	test_s2 = ft_strdup(s2);
	printf("%-20s %-20s %-5s\n%-20s %-20s %-5s\n",
			"Expected result:", true_s1, true_s2,
				"Acutal result:", test_s1, test_s2);
	printf("Freeing memory, beware\n");
	free(true_s1);
	free(true_s2);
	free(test_s1);
	free(test_s2);
	printf("Success\n");
}
