/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:40:27 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:28 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon = NULL;
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (_weapon)
    {
        std::cout << _name << " attacks with their ";
        std::cout << _weapon->getType() << std::endl;
    }
    else
        std::cout << _name << " have no weapon" << std::endl;
    return ;
}