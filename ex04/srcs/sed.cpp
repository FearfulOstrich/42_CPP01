/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:04:13 by antoine           #+#    #+#             */
/*   Updated: 2022/07/27 23:17:55 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

t_bool	sed(char *fname, char *s1, char *s2)
{
	std::string	content;

	content = read_file(fname);
	if (content.empty())
		return (1);
	// std::cout << content;
	if (check_substrings(s1, s2) != 0)
		return (1);
	if (replace(content, s1, s2) != 0)
		return (1);
	std::cout << content;
	// if (write(content, fname) != 0)
	// 	return (1);
	return (0);
}
