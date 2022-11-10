#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <set>
# include <cmath>
# include <algorithm>

class Span {
	public:
		Span(const Span & other);
		Span(unsigned int n);
		Span(std :: vector<int> :: iterator first, std :: vector<int> :: iterator last);
		~Span(void);
		Span & operator=(const Span &other);
		void	addNumber(int n);
		long	shortestSpan(void) const;
		long	longestSpan(void) const;
	private:
		Span(void);
		std :: vector<int> arr;
		unsigned int	size;
};
#endif