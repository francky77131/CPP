/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:04:06 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 22:43:57 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

const std::string& Weapon::getType(void) const
{
    const std::string &typeREF = _type;
    return (typeREF);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
    return ;
}