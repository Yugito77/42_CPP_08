/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:46:13 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/02 19:02:15 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> arr;
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	
	std::vector<char> arr2;
	arr2.push_back('a');
	arr2.push_back('d');
	arr2.push_back('c');

	easyfind(arr, 2);
	easyfind(arr, -2);

	easyfind(arr2, 'd');

	return (0);
}