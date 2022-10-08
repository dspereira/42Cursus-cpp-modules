/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:35:23 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/07 17:53:28 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define SIZE_IDEAS 100

class Brain
{
	private:
		std::string ideas[SIZE_IDEAS];
	
	public:
		Brain();
		Brain(const Brain& other);
		~Brain();
		Brain& operator=(const Brain& other);
		void addNewIdea(const std::string& idea);
		void addNewIdea(const std::string& idea, int index);
		void showIdea(int index);
};

#endif