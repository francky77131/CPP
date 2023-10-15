/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:59:32 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/12 15:33:47 by frgojard         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);

private:
    std::string _name;
};

 Zombie* newZombie( std::string name );
 void randomChump(std::string name);

#endif