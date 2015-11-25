/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:50:45 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/25 15:56:27 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

void	test_itoa(void)
{
	printf("\nTesting ft_itoa\n");
	printf("%-20s %-15ld %-15d %-15d\n%-20s %-15s %-15s %-15s\n",
			"Expected result:", -2147483648, 2147483647, 0,
				"Actual result:", ft_itoa(-2147483648), ft_itoa(2147483647),
					ft_itoa(0));
}