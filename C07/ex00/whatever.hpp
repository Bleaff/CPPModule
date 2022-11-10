#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<class T>
void swap(T &t1, T &t2)
{
    T tmp = t1;
    t1 = t2;
    t2 = tmp;
}

template<class T>
T &min(T &a, T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template<class T>
T &max(T &a, T &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif