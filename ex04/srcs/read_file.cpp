/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:50:28 by antoine           #+#    #+#             */
/*   Updated: 2022/07/27 23:07:13 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	read_file(char *fname)
{
	std::ifstream		infile;
	std::stringstream	content;

	infile.open(fname);
	if (!infile.is_open())
		return (0);
	content << infile.rdbuf();
	return (content.str());
}
