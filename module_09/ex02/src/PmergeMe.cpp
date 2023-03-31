/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:13:23 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/31 17:49:42 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _size(0) {}

PmergeMe::PmergeMe(int size): _size(size) {}

PmergeMe::~PmergeMe() {}

void PmergeMe::sortList(char **args)
{
	std::list<int>	sortedList;
	clock_t			ticks;

	ticks = clock();
	fillList(args);
	_list = mergeSortList(_list.begin(), _list.end());
	_listSortTimeSec = (double)(clock() - ticks) / CLOCKS_PER_SEC;

	// Just for debug
	std::cout << "Final result" << std::endl;
	std::cout << "Time: ";
	std::cout << std::fixed << std::setprecision(6) << _listSortTimeSec << " sec" << std::endl;
	std::list<int>::iterator it;
	for(it = _list.begin(); it != _list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::fillList(char **args)
{
	for (int i = 0; i < _size; i++)
		_list.push_back(std::atoi(args[i]));
}

std::list<int> PmergeMe::mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	std::list<int> list;
	std::list<int> l1;
	std::list<int> l2;
	std::list<int> res;
	std::list<int>::iterator midIt;

	list.assign(begin, end);
	if (list.size() <= K)
	{
		insertionSortList(list);
		return (list);
	}
	midIt = list.begin();	
	for (size_t i = 0; i < (list.size() / 2); i++)
		midIt++;
	l1 = mergeSortList(list.begin(), midIt);
	l2 = mergeSortList(midIt, list.end());
	res.merge(l1);
	res.merge(l2);
	return (res);
}

void PmergeMe::insertionSortList(std::list<int> &list)
{
	std::list<int>::iterator	it;
	std::list<int>::iterator	it1;
	std::list<int>::iterator	it2;
	int							buff;

	if (list.size() <= 1)
		return ;
	it = ++list.begin();
	while (it != list.end())
	{
		(it1 = it)--;
		it2 = it;
		while (*it1 > *it2)
		{
			buff = *it1;
			*it1 = *it2;
			*it2 = buff;
			if (it1 == list.begin())
				break;
			it1--;
			it2--;
		}
		it++;
	}
}
