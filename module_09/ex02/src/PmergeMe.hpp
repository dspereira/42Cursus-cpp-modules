/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:02:38 by dsilveri          #+#    #+#             */
/*   Updated: 2023/04/01 14:47:14 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>
#include <ctime>
#include <iomanip>

#define K 3

class PmergeMe
{
	private:
		std::list<int>		_list;
		std::vector<int>	_vector;
		double				_listSortTimeSec;
		double				_vectorSortTimeSec;

		std::list<int> mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end);
		void insertionSortList(std::list<int> &list);

	public:
		PmergeMe();
		PmergeMe(int size);
		PmergeMe(const PmergeMe& other);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& other);
		void sortList(char **args, int size);
		void sortVector(char **args, int size);
		void displayInfo(char **args, int size);
};

#endif