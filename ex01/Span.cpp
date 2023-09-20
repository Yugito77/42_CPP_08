/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:18:46 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/07 17:54:00 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0), _temp(0), _array()
{
}

Span::Span(unsigned int N) : _N(N), _temp(0), _array()
{
}

Span::Span(Span const& cpy)
{
    *this = cpy;
}

Span::~Span()
{
}

/***********************************************************************************************/

Span& Span::operator=(Span const& cpy)
{
	if (this == &cpy)
		return (*this);
	_N = cpy._N;
	_temp = cpy._temp;
	_array = cpy._array;
	return (*this);
}

int& Span::operator[](size_t pos)
{
	if (pos >= _N)
		throw Span::OutOfRange();
	return(_array[pos]);
}

/***********************************************************************************************/

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (_temp >= _N)
		throw Span::AlreadyFull();
	_array.insert(_array.end(), start, end);
}


void Span::addNumber(int nbr)
{
	if (_temp >= _N)
		throw Span::AlreadyFull();
	_array.push_back(nbr);
	_temp++;
}

int	Span::shortestSpan()
{
	if (_temp == 0 || _temp == 1)
		throw Span::NotEnoughNumber();
		
	std::vector<int> mini;
	std::vector<int>::iterator it;
	std::vector<int>::iterator prev;
	
	std::sort(_array.begin(), _array.end());
	for(it = _array.begin(); it != _array.end(); it++)
	{
		if (it != _array.begin())
		{
			prev = it - 1;
			mini.push_back(*it - *prev);
		}
	}
	return (*std::min_element(mini.begin(), mini.end()));
}

int	Span::longestSpan()
{
	if (_temp == 0 || _temp == 1)
		throw Span::NotEnoughNumber();
	return ((*std::max_element(_array.begin(), _array.end())) - (*std::min_element(_array.begin(), _array.end())));
}

/***********************************************************************************************/

unsigned int Span::getSize()
{
	return (_N);
}

/***********************************************************************************************/

const char *Span::OutOfRange::what() const throw()
{
	return ("Out of Range !");
}

const char *Span::NotEnoughNumber::what() const throw()
{
	return ("Not Enough Number !");
}

const char *Span::AlreadyFull::what() const throw()
{
	return ("Array Already Full !");
}