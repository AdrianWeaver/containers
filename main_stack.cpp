/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stack.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:34:48 by aweaver           #+#    #+#             */
/*   Updated: 2023/02/10 13:44:03 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// constructing stacks
#include <iostream>			// std::cout
#include <stack>			// std::stack
#if CUSTOMSCOPE == 0 //CREATE A REAL STL EXAMPLE
	#include <map>
	#include <stack>
	#include <vector>
	namespace ft = std;
#else
	#include "map.hpp"
	#include "stack.hpp"
	#include "vector.hpp"
	#include "ft_containers.hpp"
#endif

int main ()
{
	std::deque<int>		mydeque(3,100);			// deque with 3 elements
	std::vector<int>	myvector(2,200);		// vector with 2 elements

	ft::stack<int>	first;					// empty stack
	ft::stack<int>	second(mydeque);		// stack initialized to copy of deque
	ft::stack<int,std::vector<int> >	third;	// empty stack using vector
	ft::stack<int,std::vector<int> >	fourth(myvector);

	std::cout << "size of first: "	<< first.size()		<< std::endl;
	std::cout << "size of second: "	<< second.size()	<< std::endl;
	std::cout << "size of third: "	<< third.size()		<< std::endl;
	std::cout << "size of fourth: "	<< fourth.size()	<< std::endl;
	std::cout << "Testing == " << std::endl;
	std::cout << "\tshould be 1 : " << (first == first) << std::endl;
	std::cout << "\tshould be 0 : " << (first == second) << std::endl;
	std::cout << "Testing != " << std::endl;
	std::cout << "\tshould be 1 : " << (first != second) << std::endl;
	std::cout << "\tshould be 0 : " << (first != first) << std::endl;
	std::cout << "Testing < " << std::endl;
	std::cout << "\tshould be 1 : " << (first < second) << std::endl;
	std::cout << "\tshould be 0 : " << (first < first) << std::endl;
	std::cout << "\tshould be 0 : " << (second < first) << std::endl;
	std::cout << "Testing <= " << std::endl;
	std::cout << "\tshould be 1 : " << (first <= first) << std::endl;
	std::cout << "\tshould be 1 : " << (first <= second) << std::endl;
	std::cout << "\tshould be 0 : " << (second <= first) << std::endl;
	std::cout << "testing > " << std::endl;
	std::cout << "\tshould be 1 : " << (second > first) << std::endl;
	std::cout << "\tshould be 0 : " << (first > first) << std::endl;
	std::cout << "\tshould be 0 : " << (first > second) << std::endl;
	std::cout << "testing >= " << std::endl;
	std::cout << "\tshould be 1 : " << (first >= first) << std::endl;
	std::cout << "\tshould be 1 : " << (second >= first) << std::endl;
	std::cout << "\tshould be 0 : " << (first >= second) << std::endl;

  return 0;
}
