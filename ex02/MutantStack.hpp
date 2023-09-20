/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:02:48 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/08 15:09:05 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>

class MutantStack : public std::stack<T>
{
	
	public :
		
		typedef typename std::stack<T>::container_type::iterator	iterator;
		
		MutantStack<T>() {}
		MutantStack<T> (const MutantStack &src) { *this = src; }
		~MutantStack<T> () {}

		MutantStack	&operator=(const MutantStack &rhs) {
			if (this == &rhs) return (*this);
			this->c = rhs.c;
			return (*this);
		}

		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }
};

#endif