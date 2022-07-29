/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:21:47 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 20:36:27 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon	club = Weapon("simple club");
		HumanA	bob = HumanA("bob", club);

		bob.attack();
		club.setType("big club");
		bob.attack();
		club.setType("huge club");
		bob.attack();
	}
	{
		Weapon	sword = Weapon("wooden sword");
		HumanB	michel = HumanB("michel");

		michel.attack();
		michel.setWeapon(sword);
		michel.attack();
		sword.setType("iron sword");
		michel.attack();
		sword.setType("steel sword");
		michel.attack();
	}
	return (0);
}
