/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:40:21 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:22 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their ";
    std::cout << _weapon.getType() << std::endl;
    return ;
}