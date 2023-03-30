/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:02:38 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/30 17:44:18 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>

class PmergeMe
{
	private:
	std::list<int>		_list;
	std::vector<int>	_vector;
	int					_size;

	void fillList(char **args);
	std::list<int> mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end);

	public:
		PmergeMe();
		PmergeMe(int size);
		PmergeMe(const PmergeMe& other);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& other);
		void sortList(char **args);
		void sortVector(char **args);
};

#endif