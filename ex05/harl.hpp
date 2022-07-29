/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:48:49 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/29 15:06:51 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
# define _HARL_HPP_

enum	ComplainLevel
{
	0: &Harl::_debug;
	1: &Harl::_info;
	2: 
}

class Harl
{
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif
