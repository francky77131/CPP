/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:53:09 by frgojard          #+#    #+#             */
/*   Updated: 2023/11/07 14:36:44 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include <cstdio>

class	Brain
{
public:
	Brain(void);
	Brain(Brain const & copy);
	~Brain(void);

	Brain&	operator=(Brain const & egl);

	void	set_ideas(void);
	void	set_ideas(std::string idea);
	std::string		get_ideas(int array);

private:
	std::string	_ideas[100];
};

#endif
