/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:52:11 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 14:15:25 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data {
    public:
        Data(std::string str);
        Data(const Data & other);
        ~Data(void);
        
        Data & operator=(const Data & other);

        std::string getStr(void) const;
        
    private:
        std::string _str;
};

#endif