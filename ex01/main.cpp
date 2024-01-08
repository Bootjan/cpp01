/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:12:16 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 17:30:47 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*horde = zombieHorde(3, "John");
	if (!horde)
		return (1);
	horde[1].announce();
	if (horde)
		delete[] horde;
	return (0);
}
