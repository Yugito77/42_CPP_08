/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:18:39 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/07 17:55:32 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        
        Span a(5);
        a.addNumber(6);
        a.addNumber(3);
        a.addNumber(17);
        a.addNumber(9);
        a.addNumber(11);
        Span b(a);

        std::cout<<"shortest = "<<a.shortestSpan()<<std::endl;
        std::cout<<"longest = "<<a.longestSpan()<<std::endl;
		
        b[4] = 10;
        std::cout<<"shortest = "<<b.shortestSpan()<<std::endl;
        std::cout<<"longest = "<<b.longestSpan()<<std::endl;
    }
    
    catch (std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }

}