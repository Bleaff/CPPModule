#pragma once

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <class T>
class MutantStack : public std :: stack<T> {
	public:
		MutantStack(void);
		MutantStack(const MutantStack & other);
		virtual				~MutantStack(void);
		MutantStack & operator=(const MutantStack & other);
		typedef typename std :: stack<T> :: container_type :: iterator 			iterator;
		typedef typename std :: stack<T> :: container_type :: const_iterator	const_iterator;
		typedef typename std :: stack<T> :: container_type :: reverse_iterator	reverse_iterator;
		typedef typename std :: stack<T> :: container_type :: const_reverse_iterator const_reverse_iterator;
		iterator			begin(void);
		const_iterator		begin(void) const;
		iterator 			end(void);
		const_iterator		end(void) const;
		reverse_iterator	rbegin(void);
		const_reverse_iterator rbegin(void) const;
		reverse_iterator 	rend();
		const_reverse_iterator rend(void) const;
};

template <class T>
MutantStack<T> :: MutantStack(void) {}

template <class T>
MutantStack<T> :: ~MutantStack(void) {}

template <class T>
MutantStack<T> :: MutantStack(const MutantStack<T> & other): std :: stack<T>(other) {}

template <class T>
MutantStack<T> & MutantStack<T> :: operator=(const MutantStack<T> & other) {
	static_cast<void>(other);
	return *this;
}

template <class T>
typename MutantStack<T> :: iterator MutantStack<T> :: begin(void) {
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T> :: iterator MutantStack<T> :: end(void) {
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const
{
	return (this->c.end());
}

template <class T>
typename MutantStack<T> :: reverse_iterator MutantStack<T> :: rbegin(void) {
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin(void) const
{
	return (this->c.rbegin());
}

template <class T>
typename MutantStack<T> :: reverse_iterator MutantStack<T> :: rend(void) {
	return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend(void) const
{
	return (this->c.rend());
}

#endif