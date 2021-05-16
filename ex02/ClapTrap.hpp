/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:26:03 by migferna         ###   ########.fr       */
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
	virtual ~ClapTrap( void );
	ClapTrap &operator=( const ClapTrap & orig );
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

#endif
