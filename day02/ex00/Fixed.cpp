# include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void):_fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Distructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;

	if(this != &rhs)	
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

int Fixed::getFixedPointValue(void) const{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}