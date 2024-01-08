/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:57:15 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 17:08:02 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*john = newZombie("");
	if (!john)
		return (1);
	john->announce();
	if (john)
		delete john;
	randomChump("twan");
}
