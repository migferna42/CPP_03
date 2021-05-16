/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 09:54:54 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	void 			flipChallenge( std::string const & target );
	void 			iceChallenge( std::string const & target );
	void 			mannequinChallenge( std::string const & target );
	void			botleCapChallenge( std::string const & target );
	void			tenYearChallenge( std::string const & target );
public:
	ScavTrap( void );
	ScavTrap( ScavTrap const & orig);
	ScavTrap( std::string const & name );
	~ScavTrap( void );
	ScavTrap &operator=( const ScavTrap & orig );
	void challengeNewcomer( std::string const & target );
};

#endif
