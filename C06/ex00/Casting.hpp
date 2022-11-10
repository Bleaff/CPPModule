#ifndef CASTING_HPP
# define CASTING_HPP

# include <string>
# include <iostream>

class Casting {
	public:
		Casting(void);
		Casting(const Casting	&other);
		Casting(std :: string const &raw_input);
		~Casting(void);
		Casting &operator=(const Casting &other);
		std :: string const & getInput(void) const;
		std :: string const & getType(void) const;
		bool	excep(void);
		void	print(void) const;
		class BadInput : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
	private:
		void			checkType(void);
		void			printChar(void) const;
		void			printInt(void) const;
		void			printFloat(void) const;
		void			printDouble(void) const;
		std :: string	raw_input;
		std :: string	type;
};
#endif