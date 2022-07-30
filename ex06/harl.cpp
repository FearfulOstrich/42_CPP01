/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:48:55 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/30 11:07:41 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void)
{
	// std::cout << "Harl created." << std::endl;
	return ;
}

Harl::~Harl(void)
{
	// std::cout << "Harl deleted." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	int	i;
	std::string	complains[4] = {"debug", "info", "warning", "error"};

	i = -1;
	while (++i < 4)
		if (level.compare(complains[i]) == 0)
			break ;
	switch (i)
	{
		case DEBUG:
			this->_debug();
		case INFO:
			this->_info();
		case WARNING:
			this->_warning();
		case ERROR:
			this->_error();
	}
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG]";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "[INFO]";
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING]";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve";
	std::cout << "been coming for years whereas you started working here since";
	std::cout << "last month." << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR]";
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}
