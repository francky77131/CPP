/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:30:34 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 22:44:20 by franckgojar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string& getType(void) const;
	void setType(std::string type);
private:
	std::string _type;
};

#endif