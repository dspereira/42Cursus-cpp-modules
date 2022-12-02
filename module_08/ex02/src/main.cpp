/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:46:05 by dsilveri          #+#    #+#             */
/*   Updated: 2022/12/02 11:39:14 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

void test_subject()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void test_subject_list()
{
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.front() << std::endl;
	mstack.pop_front();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(mstack);
}

void test_multiples_nums(void)
{
	MutantStack<int> mstack;
	MutantStack<int>::iterator it;

	for (int i = 0; i < 100; i++)
		mstack.push(i);

	for(it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "remove all elements" << std::endl;
	for (int i = 0; i < 100; i++)
		mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
}

void test_const_stack(void)
{
	MutantStack<int> mstack;
	MutantStack<int>::const_iterator it;

	for (int i = 0; i < 10; i++)
		mstack.push(i);

	const MutantStack<int> constStack (mstack);

	for(it = constStack.begin(); it != constStack.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

}

int main(void)
{
	std::cout << "Test from subject" << std::endl;
	test_subject();
	std::cout << std::endl;
	std::cout << "Test from subject modifyed for list" << std::endl;
	test_subject_list();
	std::cout << std::endl;
	std::cout << "test multiple numbers" << std::endl;
	test_multiples_nums();
	std::cout << std::endl;
	std::cout << "test constant stack" << std::endl;
	test_const_stack();

	return (0);
}
