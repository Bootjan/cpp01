/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:04:45 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 19:06:26 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setType(std::string new_type);
		void	setWeapon(Weapon &new_weapon);
};

#endif