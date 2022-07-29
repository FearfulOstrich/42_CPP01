/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:48:55 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/29 19:03:04 by antoine          ###   ########.fr       */
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
	void		(Harl::*fct_ptr[4])(void) =\
		{&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	complains[4] = {"debug", "info", "warning", "error"};
	int			i;

	i = -1;
	while (++i < 4)
	{
		if (complains[i] == level)
		{
			(this->*fct_ptr[i])();
			return ;
		}
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
