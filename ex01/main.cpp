/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:01:06 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 14:24:52 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

//reinterpret _cast performs conversions pointer/integer

//Convert pointer into int type
uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
//Convert int to pointer
Data* deserialize(uintptr_t raw) {
    return(reinterpret_cast<Data*>(raw));
}

int main(void) {
    
    Data data1("Hello 42!");
    
    //serialize
    uintptr_t temp = serialize(&data1);
    //deserialize
    Data* data2 = deserialize(temp);

    //Both have same memory address and same string
    std::cout << "Data1: " << &data1 << " - " << data1.getStr() << std::endl;
    std::cout << "Data2: " << data2 << " - " << data2->getStr() << std::endl; 
    
    return (0);
}