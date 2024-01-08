/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:50:54 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 18:58:10 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack(void);
		void	setType(std::string new_type);
};

#endif