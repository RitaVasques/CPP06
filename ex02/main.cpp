/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:38:02 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 15:17:48 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void) {
	Base* create;
	//random int from 1 to 3
	int random = (std::rand() % 3) + 1;
	if (random == 1)
	{
		create = new A;
		std::cout << "A instanciated" << std::endl;
	}
	if (random == 2)
	{
		create = new B;
		std::cout << "B instanciated" << std::endl;
	}
	if (random == 3)
	{
		create = new C;
		std::cout << "C instanciated" << std::endl;
	}
	// Return object as Base*/upcasting. Acrual objects are A, B or C.
	return (static_cast<Base*>(create));
}

//Dynamic_cast checks actual type at runtime

//ponter version
void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Base A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Base B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Base C" << std::endl;
}

//reference version
void identify(Base & p) {
	   try
	   {
			(void)dynamic_cast<A&>(p);
			std::cout << "Base A" << std::endl;
			return ;
	   }
	   catch (std::bad_cast &bc) {}
	   try
	   {
			(void)dynamic_cast<B&>(p);
			std::cout << "Base B" << std::endl;
			return ;
	   }
	   catch (std::bad_cast &bc) {}
	   try
	   {
			(void)dynamic_cast<C&>(p);
			std::cout << "Base C" << std::endl;
			return ;
	   }
	   catch (std::bad_cast &bc) {}
}

int main(void) {
	//For random to work
	std::srand(std::time(0));

	std::cout << "GENERATE" << std::endl;
	Base *create = generate();
	std::cout << std::endl;

	// Create reference
	Base &create_ref = *create;

	std::cout << "IDENTIFY *" << std::endl;
	identify(create);
	std::cout << std::endl;

	std::cout << "IDENTIFY &" << std::endl;
	identify(create_ref);
	std::cout << std::endl;

	delete create;
		
	return (0);
}