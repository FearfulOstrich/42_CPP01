/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:48:55 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/29 15:04:48 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl created." << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Harl deleted." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
	pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. \
	You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking \
	for more!" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve \
	been coming for years whereas you started working here since last month."\
	<< std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."\
	<< std::endl;
	return ;
}