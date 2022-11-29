/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:13:10 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/29 10:45:22 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class ElementNotFindException: public std::exception {
	public:
		const char* what() const throw()
		{
			return ("the element was not found");
		}
};

template<typename T>
int easyfind(const T& data, int elem)
{
	typename T::const_iterator it = data.begin();

	while (it != data.end())
	{
		if (*it == elem)
			return (elem);
		it++;
	}
	throw ElementNotFindException();
}

#endif
