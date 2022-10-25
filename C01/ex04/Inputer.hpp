/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inputer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:42:59 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 22:11:46 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUTER_HPP
#define INPUTER_HPP
#include <fstream>
#include <iostream>

class Inputer
{
private:
    std::string infile, outfile;
    std::string to_replace;
    std::string replace_with;
    std::ifstream in;
    std::ofstream out;
    std::string file;
    void eraseInsert();

public:
    Inputer();
    Inputer(std::string filen, std::string tr, std::string rw);
    ~Inputer();
    void readFile();
    void writeFile();
};


#endif
