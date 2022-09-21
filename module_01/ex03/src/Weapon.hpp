/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:13:15 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/21 12:28:49 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WAEPON_HPP
#define WAEPON_HPP

#include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string& getType(void);
		void setType(std::string type);
};

#endif