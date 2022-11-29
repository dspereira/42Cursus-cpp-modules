/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:13:10 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/29 12:16:12 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::const_iterator easyFind(const T& data, int elem)
{
	typename T::const_iterator elemFound;
	
	elemFound = std::find(data.begin(), data.end(), elem);
	if (elemFound == data.end())
		throw std::exception();
	return (elemFound);
}

#endif
