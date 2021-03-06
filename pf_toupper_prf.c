/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_toupper_prf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:27:42 by seshevch          #+#    #+#             */
/*   Updated: 2019/01/25 14:15:42 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

void	pf_toupper_prf(char **s)
{
	int		i;

	i = 0;
	while (s[0][i] != '\0')
	{
		if (s[0][i] >= 97 && s[0][i] <= 122)
			s[0][i] = s[0][i] - 32;
		i++;
	}
}
