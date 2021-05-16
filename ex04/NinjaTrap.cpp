/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:52:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 15:25:26 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void )
		:ClapTrap(60, 60, 120, 120, 1, "Default", 60, 5, 0)
{
	std::cout << "Un Ninja avistado" << std::endl;
}

NinjaTrap::NinjaTrap( std::string const & name )
		:ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "NINJ4-TP " << this->_name << " ha sido avistado" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & orig )
{
	std::cout << "Se está clonando un Ninja" << std::endl;
	*this = orig;
}

NinjaTrap &NinjaTrap::operator=( const NinjaTrap & orig )
{
	ClapTrap::operator=(orig);
	return (*this);
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout 	<< "NINJ4-TP " << this->_name << " abatido"
				<< std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & clapTrap)
{
	std::cout 	<< "NINJ4 " << this->_name << " está oculto para atacar a "
				<< clapTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & fragTrap)
{
	std::cout 	<< "NINJ4 " << this->_name << " está oculto para atacar a "
				<< fragTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & scavTrap)
{
	std::cout 	<< "NINJ4 " << this->_name << " está oculto para atacar a "
				<< scavTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninjaTrap)
{
	std::cout 	<< "NINJ4 " << this->_name << " está oculto para atacar a "
				<< ninjaTrap.getName() << std::endl;
}
