/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:06:35 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 19:06:20 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	const std::string	&weapon = this->_weapon->getType();
	std::cout 	<< this->_name
				<< " attacks with their "
				<< weapon << std::endl;
}

void	HumanB::setType(std::string new_type)
{
	this->_weapon->setType(new_type);
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	this->_weapon = &new_weapon;
}
