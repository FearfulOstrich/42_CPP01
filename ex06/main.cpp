/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:47:31 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/30 10:24:22 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main()
{
	Harl harl;

	harl.complain("error");
	std::cout << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	harl.complain("mistake");
	return (0);
}
