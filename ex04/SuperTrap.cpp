/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:37:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:37:02 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void )
{
	std::cout << "Un SuperTrap ha sido avistado" << std::endl;
}

SuperTrap::SuperTrap(std::string const name)
	:ClapTrap(100, 100, 120, 120, 1, name, 60, 30, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap " << this->_name << " ha sido avistado" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & orig)
	:ClapTrap(orig)
{
	std::cout << "Se está clonando un SuperTrap" << std::endl;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "SuperTrap abatido" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const & orig)
{
	ClapTrap::operator=(orig);
	return (*this);
}
