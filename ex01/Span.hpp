/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:18:51 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/07 17:53:18 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>

class Span
{
	public :
	
		Span();
		Span(unsigned int N);
		Span(Span const& cpy);
		~Span();

		Span& operator=(Span const& cpy);
		int& operator[](size_t pos);
		
		unsigned int getSize();
		
		void	addNumber(int nbr);
		void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		
		class OutOfRange : public std::exception
		{
			public:
				virtual const char * what() const throw();	
		};
		
		class NotEnoughNumber : public std::exception
		{
			public:
				virtual const char * what() const throw();	
		};

		class AlreadyFull : public std::exception
		{
			public:
				virtual const char * what() const throw();	
		};
		
	private :
	
		unsigned int _N;
		unsigned int _temp;
		std::vector<int> _array;

};

#endif