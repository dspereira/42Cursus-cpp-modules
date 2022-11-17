/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:30:54 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/17 13:01:33 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> a(11);

	try{
		a[20] = 20;
	}
	catch (std::exception &e)
	{
		std::cout << "exeption" << std::endl;
		e.what();
		//std::cout << a[10] << std::endl;
		//std::cout << a[10] << std::endl;
	}
	//std::cout << a[10] << std::endl;

	return (0);
}