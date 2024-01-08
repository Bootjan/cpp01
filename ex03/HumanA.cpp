/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:04:04 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 18:58:08 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	const std::string	&weapon = this->_weapon.getType();
	std::cout 	<< this->_name
				<< " attacks with their "
				<< weapon << std::endl;
}

void	HumanA::setType(std::string new_type)
{
	this->_weapon.setType(new_type);
}
