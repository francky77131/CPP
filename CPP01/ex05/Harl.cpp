/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:40:15 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/20 16:17:01 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	void (Harl::*ptrFt[4])(void);
	
	ptrFt[0] = &Harl::debug;
	ptrFt[1] = &Harl::info;
	ptrFt[2] = &Harl::warning;
	ptrFt[3] = &Harl::error;

	std::string Tab[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (Tab[i] == level)
		{
			(this->*ptrFt[i])();
			return ;
		}
	}
	std::cout << "Unknown level" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Debug : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info : I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger ! If you did, I wouldnt be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error : This is unacceptable ! I want to speak to the manager now." << std::endl;
}