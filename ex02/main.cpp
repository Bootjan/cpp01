/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:33:46 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 17:38:03 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	string = "HI THIS IS BRRAINS";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory addres of string: " << &string << std::endl;
	std::cout << "Memory addres of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory addres of stringREF: " << &stringREF << std::endl;
	std::cout  << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of stringPTR: " << stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	return (0);
}