/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:40:34 by frgojard          #+#    #+#             */
/*   Updated: 2023/09/20 14:45:36 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	filename(argv[1]);
		std::string	find(argv[2]);
		std::string	replace(argv[3]);

		std::ifstream file(filename.c_str());
		if (file)
		{
			std::string	replace_file = filename + ".replace";
			std::string	buf;
			char					c;
			unsigned long int		i = 0;

			std::ofstream	file2(replace_file.c_str());
			while (file.get(c))
			{
				if (c == find[i])
				{
					buf += c;
					i++;
					if (i == find.length())
					{
						file2 << replace;
						buf.clear();
						i = 0;
					}
				}
				else if (i != 0)
				{
					buf += c;
					file2 << buf;
					buf.clear();
					i = 0;
				}
				else
					file2 << c;
			}
			file.close();
			file2.close();
		}
		else
			std::cerr << "No filename" << std::endl;
	}
	else
		std::cerr << "Wrong amount of arguments." << std::endl;
	return (0);
}