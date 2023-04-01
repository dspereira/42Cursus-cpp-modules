/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:13:23 by dsilveri          #+#    #+#             */
/*   Updated: 2023/04/01 20:00:16 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::sortList(char **args, int size)
{
	std::list<int>	sortedList;
	clock_t			ticks;

	ticks = clock();
	for (int i = 0; i < size; i++)
		_list.push_back(std::atoi(args[i]));
	_list = mergeSortList(_list.begin(), _list.end());
	_listSortTimeSec = (double)(clock() - ticks) / CLOCKS_PER_SEC;
}

std::list<int> PmergeMe::mergeSortList(std::list<int>::iterator begin,
	std::list<int>::iterator end)
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
	std::list<int>::iterator	it, it1, it2;
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

void PmergeMe::sortVector(char **args, int size)
{
	std::vector<int>	sortedVector;
	clock_t				ticks;

	ticks = clock();
	for (int i = 0; i < size; i++)
		_vector.push_back(std::atoi(args[i]));
	_vector = mergeSortVector(_vector.begin(), _vector.end());
	_vectorSortTimeSec = (double)(clock() - ticks) / CLOCKS_PER_SEC;
}

std::vector<int> PmergeMe::mergeSortVector(std::vector<int>::iterator begin,
	std::vector<int>::iterator end)
{
	std::vector<int> vector;
	std::vector<int> v1, v2;
	std::vector<int> res;
	std::vector<int>::iterator midIt;

	vector.assign(begin, end);
	if (vector.size() <= K)
	{
		insertionSortVector(vector);
		return (vector);
	}
	midIt = vector.begin();
	for (size_t i = 0; i < (vector.size() / 2); i++)
		midIt++;
	v1 = mergeSortVector(vector.begin(), midIt);
	v2 = mergeSortVector(midIt, vector.end());
	res = mergeVectors(v1, v2);
	return (res);
}

void PmergeMe::insertionSortVector(std::vector<int> &vector)
{
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it1, it2;
	int							buff;

	if (vector.size() <= 1)
		return ;
	it = ++vector.begin();
	while (it != vector.end())
	{
		(it1 = it)--;
		it2 = it;
		while (*it1 > *it2)
		{
			buff = *it1;
			*it1 = *it2;
			*it2 = buff;
			if (it1 == vector.begin())
				break;
			it1--;
			it2--;
		}
		it++;
	}	
}

std::vector<int> PmergeMe::mergeVectors(std::vector<int> &v1, std::vector<int> &v2)
{
	std::vector<int>			res;
	std::vector<int>::iterator	it1, it2;
	std::vector<int>::iterator	v1End, v2End;

	it1 = v1.begin();
	it2 = v2.begin();
	v1End = v1.end();
	v2End = v2.end();
	while (it1 != v1End || it2 != v2End)
	{
		if (it1 != v1End && it2 == v2End) {
			res.push_back(*it1);
			it1++;
		}
		else if (it2 != v2End && it1 == v1End) {
			res.push_back(*it2);
			it2++;	
		}
		else if (*it1 < *it2) {
			res.push_back(*it1);
			it1++;
		}
		else {
			res.push_back(*it2);
			it2++;
		}
	}
	return (res);
}

void PmergeMe::displayInfo(char **args, int size)
{
	std::list<int>::iterator it;
	std::cout << "Before:";
	for (int i = 0; i < size; i++)
		std::cout << " " << args[i];
	std::cout << std::endl;
	std::cout << "After: ";
	for (it = _list.begin(); it != _list.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
	std::cout << "Time to process a range of " << size 
			<< " elements with std::list : " << std::fixed 
			<< std::setprecision(6) << _listSortTimeSec << " sec" 
			<< std::endl;
	std::cout << "Time to process a range of " << size 
			<< " elements with std::vector : " << std::fixed 
			<< std::setprecision(6) << _vectorSortTimeSec << " sec" 
			<< std::endl;
}