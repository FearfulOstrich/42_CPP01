/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:26:58 by antoine           #+#    #+#             */
/*   Updated: 2022/07/27 17:04:25 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Program needs 4 arguments." << std::endl;
		return (1);
	}
	if (sed(argv[1], argv[2], argv[3]) != 0)
		return (2);
	return(0);
}
