/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:05:50 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 22:35:27 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void attack(void) const;
	void setWeapon(Weapon &weapon);
private:
	std::string _name;
	Weapon *_weapon;
};

#endif