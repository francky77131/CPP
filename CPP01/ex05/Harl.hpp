/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:40:13 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/20 14:49:39 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif