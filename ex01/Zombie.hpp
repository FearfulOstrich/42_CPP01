/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:54:41 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 17:18:11 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

class	Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
		void	set_name(std::string name);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);
void	zombieHordeAnnounce(Zombie *horde, int N);
#endif
