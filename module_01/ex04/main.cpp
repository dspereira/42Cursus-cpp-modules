/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:04:25 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/22 14:45:38 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool 		open_files(std::string filename, std::fstream& src, std::fstream& dst);
std::string parse_string(std::string src, std::string s1, std::string s2);

int main(int argc, char **argv)
{
	std::fstream	file_src, file_dst;
	std::string		file_all_data;

	if (argc != 4)
	{
		std::cout << "Wrong parameters" << std::endl;
		return (0);
	}
	if (!open_files(argv[1], file_src, file_dst))
		return (0);
	std::getline(file_src, file_all_data, '\0');
	file_dst << parse_string(file_all_data, argv[2], argv[3]);
	file_src.close();
	file_dst.close();	
	return (0);
}

bool open_files(std::string filename, std::fstream& src, std::fstream& dst)
{
	src.open(filename.c_str(), std::ios::in);
	if (!src.is_open())
	{
		std::cout << "Can't open file: " << filename << std::endl;
		return (false);
	}
	filename += ".replace";
	dst.open(filename.c_str(), std::ios::out);
	if (!dst.is_open())
	{
		std::cout << "Can't open/create file: " << filename << std::endl;
		src.close();
		return (false);
	}
	return (true);
}

std::string parse_string(std::string src, std::string s1, std::string s2)
{
	std::string	dst;
	size_t		found;
	int			stop;

	stop = 0;
	while (!stop)
	{
		found = src.find(s1.c_str(), 0, s1.length());
		if (found != std::string::npos)
		{
			dst += src.substr(0, found) + s2;
			src.erase(0, found + s1.length());
		}
		else
		{
			dst += src;
			stop = 1;
		}
	}
	return (dst);
}
