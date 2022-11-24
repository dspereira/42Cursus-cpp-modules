/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:30:54 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/24 16:04:07 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void test_wrong_index(void)
{
	Array<int> arr(3);

	try	{
		arr[0] = 10;
		arr[1] = 20;
		std::cout << arr.size() << std::endl;
		std::cout << arr[0] << std::endl;
		std::cout << arr[1] << std::endl;
		std::cout << arr[5] << std::endl;
		
	}
	catch (std::exception &e){
		std::cout << "Index errado" << std::endl;
	}
}

template<typename T>
void printArr(Array<T> arr)
{
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}


void test_copy(void)
{
	Array<int> arr1(2);
	arr1[0] = 10;
	arr1[1] = 20;
	Array<int> arr2(arr1);
	Array<int> arr3;
	
	arr3 = arr1;

	std::cout << "Array 1" << std::endl;
	printArr(arr1);
	std::cout << "Array 2" << std::endl;
	printArr(arr2);
	std::cout << "Array 3" << std::endl;
	printArr(arr3);

	arr1[0] = 300;
	arr1[1] = 400;
	std::cout << std::endl;
	std::cout << "Array 1 após alteração" << std::endl;
	std::cout << "Array 1" << std::endl;
	printArr(arr1);
	std::cout << "Array 2" << std::endl;
	printArr(arr2);
	std::cout << "Array 3" << std::endl;
	printArr(arr3);
	
}

class A{
	public:
	A(){
		std::cout << "Default constructor" << std::endl;
	}
	~A(){
		std::cout << "Destructor" << std::endl;
	}
};

void testClass(void)
{
	Array<A> arr(3);
}


int main(void)
{
	std::cout << "test_wrong_index" << std::endl;
	test_wrong_index();
	std::cout << std::endl;
	std::cout << "test copy" << std::endl;
	test_copy();
	std::cout << std::endl;
	std::cout << "test Class" << std::endl;
	testClass();
}
