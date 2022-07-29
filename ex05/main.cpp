/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:47:31 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/29 18:56:56 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main()
{
	Harl harl;

	harl.complain("error");
	harl.complain("warning");
	harl.complain("info");
	harl.complain("debug");
	harl.complain("mistake");
	return (0);
}
