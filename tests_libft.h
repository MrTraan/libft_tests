/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:21:22 by ngrasset          #+#    #+#             */
/*   Updated: 2015/11/25 15:54:45 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_LIBFT_H
# define TESTS_LIBFT_H
# include <libft.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

void	test_memccpy(void);
void	test_memcpy(void);
void	test_bzero(void);
void	test_memset(void);
void	test_memdel(void *ptr);
void	test_memalloc(void);
void	test_memmove(void);
void	test_memchr(void);
void	test_memcmp(void);
void	test_strlen(void);
void	test_strdup(void);
void	test_strcpy(void);
void	test_strncpy(void);
void	test_strcat(void);
void	test_strncat(void);
void	test_strlcat(void);
void	test_strchr(void);
void	test_strrchr(void);
void	test_strstr(void);
void	test_strnstr(void);
void	test_strcmp(void);
void	test_strncmp(void);
void	test_atoi(void);
void	test_strsub(void);
void	test_strtrim(void);
void	test_strsplit(void);
void	test_itoa(void);

#endif
