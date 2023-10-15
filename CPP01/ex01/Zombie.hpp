/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:59:32 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 09:11:21 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
public:
    Zombie(void);
    ~Zombie(void);
    void announce(void);
	void setName(std::string name);

private:
    std::string _name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif