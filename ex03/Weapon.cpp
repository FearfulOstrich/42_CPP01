/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:08:39 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 20:12:24 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const	&Weapon::getType(void) const
{
	std::string const	&type_ref = this->_type;
	return (type_ref);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}
