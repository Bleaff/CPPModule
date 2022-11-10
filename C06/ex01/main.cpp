/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:19:46 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/10 16:23:53 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}

Data* deserialize(uintptr_t raw) {
	Data *res = reinterpret_cast<Data *>(raw);
	return res;
}

int main(void) {
	Data	*oldData = new Data, *newData;
	uintptr_t raw;
	
	oldData->id = 1;
	oldData->data = "It is Ryan Gosling";
	std :: cout << "id: " << oldData->id << "\ninfo: " << oldData->data << std :: endl;
	std :: cout << "result of serialisation" << std :: endl;
	raw = serialize(oldData);
	std :: cout << raw << std :: endl;
	std :: cout << "result of deserialisation" << std :: endl;
	newData = deserialize(raw);
	std :: cout << "id: " << newData->id << "\ninfo: " << newData->data << std :: endl;
	delete newData;
	return 0;
}