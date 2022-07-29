/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:53:30 by antoine           #+#    #+#             */
/*   Updated: 2022/07/27 23:22:13 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SED_HPP_
# define _SED_HPP_

# include "iostream"
# include "fstream"
# include "sstream"
# include "string"

typedef int	t_bool;

t_bool		sed(char *fname, char *s1, char *s2);
std::string	read_file(char *fname);
t_bool		check_substrings(std::string s1, std::string s2);
t_bool		replace(std::string &content, std::string s1, std::string s2);
t_bool		write(std::string content, char *fname);

#endif
