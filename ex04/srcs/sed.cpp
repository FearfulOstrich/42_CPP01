/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:04:13 by antoine           #+#    #+#             */
/*   Updated: 2022/07/29 14:27:13 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

t_bool	sed(char *fname, char *s1, char *s2)
{
	std::string	content;

	if (read_file(fname, &content) != 0)
		return (1);
	if (check_substrings(s1, s2) != 0)
		return (1);
	if (replace(content, s1, s2) != 0)
		return (1);
	if (file_write(content, fname) != 0)
		return (1);
	return (0);
}
