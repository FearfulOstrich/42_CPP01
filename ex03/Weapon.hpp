/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:53:02 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 20:20:31 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef _WEAPON_H_
# define _WEAPON_H_

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
