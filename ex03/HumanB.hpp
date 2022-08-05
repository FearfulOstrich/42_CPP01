/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:03:11 by antoine           #+#    #+#             */
/*   Updated: 2022/08/05 13:05:33 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon new_weapon);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
