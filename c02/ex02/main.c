/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:51:10 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 17:57:24 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char *strok;
	char *strnotok;

	strok = "HELLO";
	strnotok = "HELL0";
	printf("1 is ok %d, ", ft_str_is_alpha(strok));
	printf("0 is ok %d, ", ft_str_is_alpha(strnotok));
}
