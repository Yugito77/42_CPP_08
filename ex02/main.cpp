/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:02:56 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/08 15:31:17 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void) {

	{
		std::cout << " *** Trying with the MutantStack class ***" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout <<  "top : "<< mstack.top() << std::endl;
		mstack.pop();
		std::cout <<  "size : "<< mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mstack);
	}

	{
		std::cout << " *** Trying with the list class ***" << std::endl;
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		std::cout << "back : "<< list.back() << std::endl;
		list.pop_back();
		std::cout << "size : "<< list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return (0);
}