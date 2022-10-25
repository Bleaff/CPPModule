/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inputer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:42:55 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 22:32:20 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inputer.hpp"
#include <iostream>

Inputer::Inputer(){}
Inputer::Inputer(std::string filen, std::string tr, std::string rw) : infile(filen), to_replace(tr), replace_with(rw)
{
    if (this->to_replace == "" || this->replace_with == "")
    {
        std::cout << "ERROR: replace or new_value == \"\"" << std::endl;
        exit(-1);
    }
    this->in.open(filen);
    if (!this->in.is_open() || filen == "")
    {
        std::cout << "ERROR: InFile can't be open" << std::endl;
        exit(-1);
    }
    this->outfile = filen + ".replace";
    this->out.open(this->outfile);
    if (!this->in.is_open() || filen == "")
    {
        std::cout << "ERROR: OutFile can't be open" << std::endl;
        exit(-1);
    }
}

Inputer::~Inputer(){}

void Inputer::readFile()
{
    std::string buff;
    if (!this->in.is_open())
    {
        std::cout << "ERROR: InFile can't be open" << std::endl;
        exit(-1);
    }
    getline(this->in, buff);
    this->file += buff;
    while (getline(this->in, buff))
        this->file += "\n" + buff;
    this->in.close();
}

void Inputer::eraseInsert()
{
    for (size_t i = 0; i < this->file.length(); i++)
    {
        if (file.compare(i, this->to_replace.length(), this->to_replace) == 0)
        {
            file.erase(i, this->to_replace.length());
            file.insert(i, this->replace_with);
        }
    }
}

void Inputer::writeFile()
{
    this->eraseInsert();
    if (!this->out.is_open())
    {
        std::cout << "ERROR: OutFile can't be open" << std::endl;
        exit(-1);
    }
    for (size_t i = 0; i < this->file.length(); i++)
    {
        this->out << this->file[i];        
    }
    this->out.close();
}

