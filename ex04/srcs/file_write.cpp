/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_write.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:51:45 by aalleon           #+#    #+#             */
/*   Updated: 2022/07/29 14:14:26 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

t_bool	file_write(std::string content, char *fname)
{
	std::ofstream	outfile;
	std::string		outfname;

	outfname = fname;
	outfname += ".replace";
	outfile.open(outfname.c_str());
	if (!outfile.is_open())
		return (1);
	outfile << content;
	if (outfile.bad() || outfile.fail())
	{
		outfile.close();
		return (1);
	}
	outfile.close();
	return (0);
}
