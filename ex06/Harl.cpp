/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:49:12 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 23:42:56 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	print_message(const char *msg)
{
	std::cout << msg << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	print_message("[ DEBUG ]");
	print_message(DEBUG_MSG);
	std::cout << std::endl;
}

void	Harl::info(void)
{
	print_message("[ INFO ]");
	print_message(INFO_MSG);
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	print_message("[ WARNING ]");
	print_message(WARNING_MSG);
	std::cout << std::endl;
}

void	Harl::error(void)
{
	print_message("[ ERROR ]");
	print_message(ERROR_MSG);
	std::cout << std::endl;
}

static int	computeLevel(std::string level)
{
	int	intLevel = 0;
	std::string	funcs[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	
	while (intLevel < 4 && level.compare(funcs[intLevel]))
		intLevel++;
	return (intLevel);
}

void	Harl::filter(std::string level)
{
	int		intLevel = computeLevel(level);
	
	switch (intLevel)
	{
		case 3: this->error();
		case 2: this->warning();
		case 1: this->info();
		case 0: this->debug();
	}
}
