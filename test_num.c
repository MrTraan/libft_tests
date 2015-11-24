/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:43:45 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/24 21:04:53 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

void	test_atoi(void)
{
	printf("Testing ft_atoi\n");
	printf("%-20s %-10d %-10d %-10d\n%-20s %-10d %-10d %-10d\n",
			"Expected result:", atoi("  -45rew"), atoi("-2147483648"), atoi("3223f3"),
				"Actual result:", ft_atoi("  -45rew"), ft_atoi("-2147483648"), ft_atoi("3223f3"));
}
