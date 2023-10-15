/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:59:11 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/12 14:57:28 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *bruno = newZombie("Bruno");
	randomChump("Jean");
	delete bruno;
	return (0);
}