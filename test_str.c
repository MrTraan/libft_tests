/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:18:16 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/24 20:29:41 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

void	test_strncmp(void)
{
	char	*str1 = "je suis identique jusqu'ici";
	char	*str2 = "je suis identique jusaue la";

	printf("\nTesting ft_strncmp\n");
	printf("%-20s %-5d %-5d\n%-20s %-5d %-5d\n", "Expected result:",
			strncmp(str1, str2, 5), strncmp(str1, str2, 30), "Actual result:",
				ft_strncmp(str1, str2, 5), ft_strncmp(str1, str2, 30));
}

void	test_strcmp(void)
{
	char	*str1 = "je suis identique jusqu'ici";
	char	*str2 = "je suis identique jusaue la";

	printf("\nTesting ft_strcmp\n");
	printf("%-20s %-5d %-5d\n%-20s %-5d %-5d\n", "Expected result:",
			strcmp(str1, str2), strcmp(str1, str1), "Actual result:",
				ft_strcmp(str1, str2), ft_strcmp(str1, str1));
}

void	test_strnstr(void)
{
	char	*str = "Cherchez moi cherchez moi moi moi";

	printf("\nTesting ft_strnstr\n");
	printf("%-20s %-10s %-10s %-5s\n%-20s %-10s %-10s %-5s\n",
			"Expected result:", strnstr(str, "moi", 40), strnstr(str, "Chercht", 5),
				strnstr(str, "moi", 0), "Actual result:", ft_strnstr(str, "moi", 40),
					ft_strnstr(str, "Chercht",  5), ft_strnstr(str, "moi", 0));
}

void	test_strstr(void)
{
	char	*str = "Cherchez moi cherchez moi moi moi";

	printf("\nTesting ft_strstr\n");
	printf("%-20s %-10s %-10s %-5s\n%-20s %-10s %-10s %-5s\n",
			"Expected result:", strstr(str, "moi"), strstr(str, "Chercht"),
				strstr("", "moi"), "Actual result:", ft_strstr(str, "moi"),
					ft_strstr(str, "Chercht"), ft_strstr("", "moi"));
}

void	test_strrchr(void)
{
	char	*str = "je suis une chaine sans s a partir d'ici";

	printf("\nTesting ft_strrchr\n");
	printf("%-20s %-10s %-10s\n%-20s %-10s %-10s\n",
			"Expected result:", strrchr(str, 's'), strrchr(str, 'z'),
				"Acutal result:", ft_strrchr(str, 's'), ft_strrchr(str, 'z'));
}

void	test_strchr(void)
{
	char	*str = "je suis une chaine sans s a partir d'ici";

	printf("\nTesting ft_strchr\n");
	printf("%-20s %-10s %-10s\n%-20s %-10s %-10s\n",
			"Expected result:", strchr(str, 's'), strchr(str, 'z'),
				"Acutal result:", ft_strchr(str, 's'), ft_strchr(str, 'z'));
}

void	test_strlcat(void)
{
	char	*src = " partie deux";
	char	true_dst1[23] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	test_dst1[23] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	true_dst2[30] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	test_dst2[30] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	size_t	true_ret1;
	size_t	true_ret2;
	size_t	test_ret1;
	size_t	test_ret2;

	printf("\nTesting strlcat\n");
	true_ret1 = strlcat(true_dst1, src, 4);
	test_ret1 = ft_strlcat(test_dst1, src, 4);
	true_ret2 = strlcat(true_dst2, src, 25);
	test_ret2 = ft_strlcat(test_dst2, src, 25);
	printf("%-20s %-30s %-10lu %-30s %-10lu\n%-20s %-30s %-10lu %-30s %-10lu\n",
			"Expected result:", true_dst1, true_ret1, true_dst2, true_ret2,
				"Actual result:", test_dst1, test_ret1, true_dst2, test_ret2);
}

void	test_strncat(void)
{
	char	*src = " partie deux";
	char	true_dst1[23] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	test_dst1[23] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	true_dst2[30] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	test_dst2[30] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	*true_ret;
	char	*test_ret;

	printf("\nTesting strncat\n");
	true_ret = strncat(true_dst1, src, 4);
	test_ret = ft_strncat(test_dst1, src, 4);
	strncat(true_dst2, src, 25);
	ft_strncat(test_dst2, src, 25);
	printf("%-20s %-30s %-30s %-30s\n%-20s %-30s %-30s %-30s\n",
			"Expected result:", true_dst1, true_ret, true_dst2,
				"Actual result:", test_dst1, test_ret, true_dst2);
}

void	test_strcat(void)
{
	char	*src = " partie deux";
	char	true_dst[23] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	test_dst[23] = {'p', 'a', 'r', 't', 'i', 'e', ' ', 'u', 'n' ,'\0'};
	char	*true_ret;
	char	*test_ret;

	printf("\nTesting strcat\n");
	true_ret = strcat(true_dst, src);
	test_ret = ft_strcat(test_dst, src);
	printf("%-20s %-30s %-30s\n%-20s %-30s %-30s\n",
			"Expected result:", true_dst, true_ret,
				"Actual result:", test_dst, test_ret);
}
	
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
