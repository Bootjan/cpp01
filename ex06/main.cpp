/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:24:11 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 23:35:35 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (print_message("Must give 2 arguments"), 1);
	Harl		harl;
	std::string	input = argv[1];
	harl.filter(input);
}
