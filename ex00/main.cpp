/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:01:04 by antoine           #+#    #+#             */
/*   Updated: 2022/08/05 18:54:09 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;

	heapZombie = newZombie("heapMaster");
	heapZombie->announce();
	randomChump("stackMeUp");
	heapZombie->announce();
	randomChump("StackOverflow");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
