/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 13:02:51 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_CLASS_H
# define CLAP_TRAP_CLASS_H

# include <iostream>
# include <time.h>

class ClapTrap
{
protected:
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_points;
	unsigned int	_max_energy_points;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;
public:
	ClapTrap( void );
	ClapTrap( ClapTrap const & orig);
	ClapTrap( 	unsigned int hit_points, unsigned int max_hit_points,
		   		unsigned int energy_point, unsigned int max_energy_points,
				unsigned int level, std::string name,
				unsigned int melee_attack_damage,
				unsigned int ranged_attack_damage,
				unsigned int armor_damage_reduction );
	~ClapTrap( void );
	ClapTrap &operator=( const ClapTrap & orig );
	unsigned int getHitPoints( void );
	unsigned int getMaxHitPoints( void );
	unsigned int getEnergyPoints( void );
	unsigned int getMaxEnergyPoints( void );
	unsigned int getLevel( void );
	std::string getName( void );
	unsigned int getMeleeAttackDamage( void );
	unsigned int getRangedAttackDamage( void );
	unsigned int getArmorDamageReduction( void );
	void setHitPoints( unsigned int hit_points );
	void setMaxHitPoints( unsigned int max_hit_points );
	void setEnergyPoints( unsigned int energy_points );
	void setMaxEnergyPoints( unsigned int max_energy_points );
	void setLevel( unsigned int level );
	void setName( std::string name );
	void setMeleeAttackDamage( unsigned int melee_attack_damage );
	void setRangedAttackDamage( unsigned int ranged_attack_damage);
	void setArmorDamageReduction( unsigned int armor_damage_reduction);
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

#endif
