/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:38:29 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/13 09:11:57 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie *zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
		i++;
	}
	return (zombieHorde);
}