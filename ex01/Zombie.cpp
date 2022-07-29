/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:59:10 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 17:19:05 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	// std::cout << "create new default zombie" << std::endl;
	return ;
}

Zombie::Zombie(std::string name): _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	// std::cout << "Ciao" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": Braiiiiiiinnnnnzzzzzzzzzz..." << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}
