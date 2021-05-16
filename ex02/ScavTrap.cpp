/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:52:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 11:07:03 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
		:ClapTrap(100, 100, 50, 50, 1, "Default", 20, 15, 3)
{
	std::cout << "Un Scav avistado" << std::endl;
}

ScavTrap::ScavTrap( std::string const & name )
		:ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout << "SC4P-TP " << this->_name << " ha sido avistado" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & orig )
{
	std::cout << "Se está clonando un Scav" << std::endl;
	*this = orig;
}

ScavTrap &ScavTrap::operator=( const ScavTrap & orig )
{
	this->_hit_points = orig._hit_points;
	this->_max_hit_points = orig._hit_points;
	this->_energy_points = orig._hit_points;
	this->_max_energy_points = orig._max_energy_points;
	this->_level = orig._level;
	this->_name = orig._name;
	this->_melee_attack_damage = orig._melee_attack_damage;
	this->_ranged_attack_damage = orig._ranged_attack_damage;
	this->_armor_damage_reduction = orig._armor_damage_reduction;
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout 	<< "SC4P-TP " << this->_name << " abatido"
				<< std::endl;
}

typedef void (ScavTrap::* challenge)( std::string const & target );

void ScavTrap::challengeNewcomer( std::string const & target )
{
	if (this->_energy_points < 25)
	{
		std::cout 	<< "SC4P-TP " << this->_name << " batery low, vuelva a la base de carga "
					<< std::endl;
	}
	else
	{
		challenge available[] = {	&ScavTrap::flipChallenge, &ScavTrap::iceChallenge,
									&ScavTrap::mannequinChallenge, &ScavTrap::botleCapChallenge,
									&ScavTrap::tenYearChallenge };
		(this->*available[rand() % 5])(target);	
		this->_energy_points -= 25;
	}
}

void ScavTrap::flipChallenge( std::string const & target )
{
	std::cout 	<< "SC4P-TP " << this->_name << " reta a " << target
				<< " a girar la botella en el aire y que caiga de pie"
				<< std::endl;
}

void ScavTrap::iceChallenge( std::string const & target )
{
	std::cout 	<< "SC4P-TP " << this->_name << " reta a " << target
	   			<< " a tirarse un cubo de agua helada" << std::endl;	
}

void ScavTrap::mannequinChallenge( std::string const & target )
{
	std::cout 	<< "SC4P-TP " << this->_name << " reta a " << target
				<< " a permanecer inmovil" <<std::endl;
}

void ScavTrap::botleCapChallenge( std::string const & target )
{
	std::cout 	<< "SC4P-TP " << this->_name << " reta a " << target
				<< " a destapar una botella de una patada" << std::endl;
}

void ScavTrap::tenYearChallenge( std::string const & target )
{
	std::cout 	<< "SC4P-TP " << this->_name << " reta a " << target
	   			<< " a publicar una foto de hace 10 años" << std::endl;	
}
