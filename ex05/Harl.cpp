/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:49:12 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 23:22:57 by bootjan          ###   ########.fr       */
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

void	Harl::complain(std::string level)
{
	t_func	funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	int		intLevel = computeLevel(level);

	if (intLevel < 4)
		(this->*funcs[intLevel])();
}
