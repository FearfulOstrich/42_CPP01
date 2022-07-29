/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:56:39 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 20:30:18 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_
# define _HUMANA_

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);

		void	attack(void) const;

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
