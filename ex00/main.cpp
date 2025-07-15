/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:42:09 by mde-agui          #+#    #+#             */
/*   Updated: 2025/06/12 18:20:26 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int	main(void)
{
	int	a = 2;
	int	b = 3;

	std::cout << "a = " << a << "\nb = " << b << std::endl;
	::swap(a, b);
	std::cout	<< "After swap: a = " << a
				<< "\n            b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << "\n" << std::endl;

	float	x = 42.42f;
	float	y = 24.24f;
	
	std::cout << "x = " << x << "\ny = " << y << std::endl;
	::swap(x, y);
	std::cout	<< "After swap: x = " << x
				<< "\n            y = " << y << std::endl;
	std::cout << "min(x, y) = " << ::min(x, y) << std::endl;
	std::cout << "max(x, y) = " << ::max(x, y) << std::endl;

	std::cout << "\n" << std::endl;

	std::string	str1 = "Hello";
	std::string	str2 = "World";

	std::cout << "Str1 = " << str1 << "\nStr2 = " << str2 << std::endl;
	::swap(str1, str2);
	std::cout	<< "After swap: Str1 = " << str1
				<< "\n            Str2 = " << str2 << std::endl;
	std::cout << "min(str1, str2) = " << ::min(str1, str2) << std::endl;
	std::cout << "max(str1, str2) = " << ::max(str1, str2) << std::endl;
	return (0);
}

/* class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }	
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o;}

int main(void)
{
	Awesome a(2), b(4);
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	return (0);
} */
