/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:41:55 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 22:33:47 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void) const;
private:
	std::string _name;
	Weapon& _weapon;
};

#endif