/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:13:23 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/30 17:42:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _size(0) {}

PmergeMe::PmergeMe(int size): _size(size) {}

PmergeMe::~PmergeMe() {}

void PmergeMe::sortList(char **args)
{
	std::list<int> sortedList;

	fillList(args);
	sortedList = mergeSortList(&_list, _list.begin(), _list.end());
	
	// final result
	std::cout << "Final result" << std::endl;
	std::list<int>::iterator it;
	for(it = sortedList.begin(); it != sortedList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::fillList(char **args)
{
	for (int i = 0; i < _size; i++)
		_list.push_back(std::atoi(args[i]));
}

std::list<int> PmergeMe::mergeSortList(const std::list<int> *l, std::list<int>::iterator begin, std::list<int>::iterator end)
{
	std::list<int> *list = new std::list<int>();
	std::list<int> l1;
	std::list<int> l2;
	std::list<int> res;
	std::list<int>::iterator midIt;

	list->assign(begin, end);
	if (list->size() <= 1)
		return (*list);
	midIt = list->begin();	
	for (size_t i = 0; i < (list->size() / 2); i++)
		midIt++;
	l1 = mergeSortList(list, list->begin(), midIt);
	l2 = mergeSortList(list, midIt, list->end());
	res.merge(l1);
	res.merge(l2);
	(void) l;
	delete list;
	return (res);

}