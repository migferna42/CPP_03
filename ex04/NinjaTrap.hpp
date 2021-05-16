/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:01:48 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_CLASS_H
# define NINJA_TRAP_CLASS_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
		NinjaTrap( void );
		NinjaTrap( NinjaTrap const & orig);
		NinjaTrap( std::string const & name );
		virtual ~NinjaTrap( void );
		NinjaTrap &operator=( const NinjaTrap & orig );
		void ninjaShoebox(ClapTrap & claptrap);
		void ninjaShoebox(FragTrap & fragtrap);
		void ninjaShoebox(ScavTrap & scavtrap);
		void ninjaShoebox(NinjaTrap & ninjatrap);
};

#endif
