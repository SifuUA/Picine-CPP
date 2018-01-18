# include "Fixed.hpp"
# include <math.h> 

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void):_fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	int power = 1 << this->_fractionalBits;
	this->_fixedPointValue = roundf(f * power);
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
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
	return ((float)(this->_fixedPointValue)) / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const {
	return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream & o, Fixed const &i) {
	o << i.toFloat();
	return o;
}
