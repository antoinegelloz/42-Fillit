/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:46:24 by agelloz           #+#    #+#             */
/*   Updated: 2019/05/11 21:06:18 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en parametre l'adresse d'une chaine de caracteres qui doit etre
** liberee avec free(3) et son pointeur mis a NULL.
*/

#include "libft.h"

void	ft_strdel(char **s)
{
	if (s && *s)
		ft_memdel((void**)s);
}
