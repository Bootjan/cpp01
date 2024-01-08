/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:42:03 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 18:50:39 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType();
		void				setType(std::string new_type);
		void				print();
};

#endif