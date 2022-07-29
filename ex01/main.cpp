/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:01:04 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 17:17:14 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	Zombie	*ennemy_horde;

	horde = zombieHorde(10, "Bernard");
	ennemy_horde = zombieHorde(4, "Jean-Jacques");
	zombieHordeAnnounce(horde, 10);
	zombieHordeAnnounce(ennemy_horde, 4);
	delete [] horde;
	delete [] ennemy_horde;
	return (0);
}
