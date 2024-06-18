/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:20:54 by acharvoz          #+#    #+#             */
/*   Updated: 2024/06/18 15:34:55 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	fd est la carte d'identite du fichier que je veux lire.
//	read est une fonction qui se deplace suivant un buffer d'un certain size definit a la compilation, quand rappele, reprend la ou il en etait.
//	meme si lui se souvient d'ou il s'est arrete, il ne se souvient pas de ce qu'il a lu, il faut donc que je le stock dans une variable STATIC*
//	*et que je verifie que je ne suis pas arrive a la fin de la ligne, si jai un retour a la ligne dans mon stash, je renvoies tout avant mon \n retour a la ligne compris *
//	*et je met ce que je renvoie dans une autre variable
//	utiliser ft_memmove strjoin strlen (ligne malloc que je renvoie -> faire une fonction qui le fait)
//	gestion d'erreur si fd ou buffer est null return null
//	mettre mon buffer dans mon .h
//	
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	
}