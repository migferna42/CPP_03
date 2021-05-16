/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:26:48 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	void			oneShotAttack( std::string const & target );
	void 			laserAttack( std::string const & target );
	void 			torgueAttack( std::string const & target );
	void 			wizardAttack( std::string const & target );
	void 			boxAttack( std::string const & target );
public:
	FragTrap( void );
	FragTrap( FragTrap const & orig);
	FragTrap( std::string const & name );
	virtual ~FragTrap( void );
	FragTrap &operator=( const FragTrap & orig );
	void vaulthunter_dot_exe( std::string const & target );
};

#endif
