/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:50:28 by antoine           #+#    #+#             */
/*   Updated: 2022/07/29 14:26:23 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

t_bool	read_file(char *fname, std::string *content)
{
	std::ifstream		infile;
	std::stringstream	content_stream;

	infile.open(fname);
	if (!infile.is_open())
		return (1);
	content_stream << infile.rdbuf();
	infile.close();
	*content = content_stream.str();
	return (0);
}
