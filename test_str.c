/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:18:16 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/24 15:36:36 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

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
