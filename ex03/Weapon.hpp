/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:53:02 by antoine           #+#    #+#             */
/*   Updated: 2022/08/04 16:53:47 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string const	&getType(void) const;
		void				setType(std::string new_type);

	private:
		std::string	_type;
};

#endif
