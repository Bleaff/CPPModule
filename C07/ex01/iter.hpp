#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void iter(T *arr, size_t length, void (* f)(T const &))
{
    if (f == NULL)
        return ;
    for (size_t i = 0; i < length; i++)
        f(arr[i]);
}

#endif