/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:12:42 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 20:35:56 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack(void) const
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name;
		std::cout << " needs a weapon to attack" << std::endl;
		return ;
	}
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
}
