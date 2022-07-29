/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:32:40 by antoine           #+#    #+#             */
/*   Updated: 2022/07/21 19:52:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string my_string;
	std::string	*stringPTR;
	std::string	&stringREF = my_string;

	my_string = "HI THIS IS BRAIN";
	stringPTR = &my_string;

	// Show address of each variable
	std::cout << "my_string address: " << &my_string << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	// Show content of each
	std::cout << "my_string content: " << my_string << std::endl;
	std::cout << "stringPTR content: " << *stringPTR << std::endl;
	std::cout << "stringREF content: " << stringREF << std::endl;

	return (0);
}
