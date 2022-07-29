/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:09:04 by antoine           #+#    #+#             */
/*   Updated: 2022/07/27 23:22:03 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

t_bool	replace(std::string &content, std::string s1, std::string s2)
{
	size_t	occur_pos;

	occur_pos = 0;
	while (1)
	{
		occur_pos = content.find(s1, occur_pos);
		if (occur_pos == std::string::npos)
			break ;
		content = content.erase(occur_pos, s1.length());
		content = content.insert(occur_pos, s2);
		occur_pos += s2.length();
	}
	return (0);
}
