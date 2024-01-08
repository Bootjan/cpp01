/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:45:46 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 18:50:25 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "sword";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}

void	Weapon::print()
{
	std::cout << this->_type << std::endl;
}
