/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:14:08 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 17:31:35 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie	*horde = new Zombie [N];
	if (!horde)
		return (NULL);
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
