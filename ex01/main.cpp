/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 23:23:09 by mde-agui          #+#    #+#             */
/*   Updated: 2025/06/12 18:22:38 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void	print(const T& elem)
{
	std::cout << elem << std::endl;
}

template <typename T>
void	increment(T& elem)
{
	++elem;
}

int	main(void)
{
	int	intArray[] = {1, 2, 3, 4, 5};

	std::cout << "Int array:" << std::endl;
	iter(intArray, 5, print<int>);
	std::cout << "After increment:" << std::endl;
	iter(intArray, 5, increment<int>);
	iter(intArray, 5, print<int>);

	std::cout << "\n" << std::endl;

	std::string	strArray[] = {"Hello", "World", "!"};
	std::cout << "String array:" << std::endl;
	iter(strArray, 3, print<std::string>);

	std::cout << "\n" << std::endl;

	std::cout << "Empty array test:" << std::endl;
	iter((int*)0, 0, print<int>);
	return (0);
}

/* class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
} */