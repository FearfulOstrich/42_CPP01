/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHordeAnnounce.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:10:40 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 17:11:54 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	zombieHordeAnnounce(Zombie *horde, int N)
{
	int	i;

	i = -1;
	while (++i < N)
		horde[i].announce();
	return ;
}
