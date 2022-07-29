/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:53:30 by antoine           #+#    #+#             */
/*   Updated: 2022/07/29 14:26:06 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SED_HPP_
# define _SED_HPP_

# include "iostream"
# include "fstream"
# include "sstream"
# include "string"

typedef int	t_bool;

t_bool	sed(char *fname, char *s1, char *s2);
t_bool	read_file(char *fname, std::string *content);
t_bool	check_substrings(std::string s1, std::string s2);
t_bool	replace(std::string &content, std::string s1, std::string s2);
t_bool	file_write(std::string content, char *fname);

#endif
