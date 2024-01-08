/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:43:17 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 23:34:02 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP

# include <iostream>

# define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
# define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
# define WARNING_MSG "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
# define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
# define WRONG_LEVEL "Entered wrong level"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();
		void	filter(std::string level);
};

typedef void (Harl::*t_func) ( void );

void	print_message(const char *msg);

#endif