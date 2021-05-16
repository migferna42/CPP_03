/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:52:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 11:08:09 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
		:_hit_points(0), _max_hit_points(0), _energy_points(0),
		_max_energy_points(0), _level(0), _name("noname"),
		_melee_attack_damage(0), _ranged_attack_damage(0),
		_armor_damage_reduction(0)
{
	std::cout << "Un Clap avistado" << std::endl;
}

ClapTrap::ClapTrap( unsigned int hit_points, unsigned int max_hit_points,
					unsigned int energy_points, unsigned int max_energy_points,
					unsigned int level, std::string name,
					unsigned int melee_attack_damage,
					unsigned int ranged_attack_damage,
					unsigned int armor_damage_reduction)
		:_hit_points(hit_points), _max_hit_points(max_hit_points),
		_energy_points(energy_points), _max_energy_points(max_energy_points),
		_level(level), _name(name), _melee_attack_damage(melee_attack_damage),
		_ranged_attack_damage(ranged_attack_damage),
		_armor_damage_reduction(armor_damage_reduction)	
{
	std::cout << "CL4P-TP " << this->_name << " ha sido avistado" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & orig )
{
	std::cout << "Se está clonando un Clap" << std::endl;
	*this = orig;
}

ClapTrap &ClapTrap::operator=( const ClapTrap & orig )
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

ClapTrap::~ClapTrap( void )
{
	std::cout 	<< "CL4P-TP " << this->_name << " abatido"
				<< std::endl;
}

void ClapTrap::rangedAttack( std::string const & target )
{
	std::cout 	<< "CL4P-TP " << this->_name << " ataca a " << target
				<< " de lejos, ¡causandole " << this->_ranged_attack_damage
				<< " puntos de daño!" << std::endl; 
}

void ClapTrap::meleeAttack( std::string const & target )
{
	std::cout 	<< "CL4P-TP " << this->_name << " ataca a " << target
				<< " de cerca, ¡causandole " << this->_melee_attack_damage
				<< " puntos de daño!" << std::endl; 
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout 	<< "CL4P-TP " << this->_name << " va a recibir un daño de "
				<< amount << " pero se protege con su armadura de "
				<< this->_armor_damage_reduction << std::endl;
	amount -= this->_armor_damage_reduction;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
	std::cout 	<< "CL4P-TP " << this->_name << " herido con "
				<< amount << " HP. HP restante: "
				<< this->_hit_points << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	this->_hit_points += amount;
	std::cout 	<< "CL4P-TP " << this->_name << " ha recuperado "
				<< amount << " HP. HP restante: "
				<< this->_hit_points << std::endl;
}
