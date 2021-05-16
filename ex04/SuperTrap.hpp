/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:32:38 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:06:20 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap( void );
		SuperTrap( std::string name );
		SuperTrap( SuperTrap const & orig );
		virtual ~SuperTrap( void );
		SuperTrap &operator=( SuperTrap const & orig );
};

#endif
