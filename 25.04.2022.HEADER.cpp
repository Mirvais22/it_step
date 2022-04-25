#include <iostream>
#include "Header.h"

fraction::fraction()
{
	numerator = 0;
	denominator = 0;
}

fraction::fraction(const unsigned int num, const unsigned int den)
{
	numerator = num;
	denominator = den;
}

fraction fraction::operator+(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator + obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int numerator1 = obj.numerator;
		int denomirator1 = obj.denominator;
		this->numerator = this->numerator * denomirator1;
		numerator1 = this->denominator * numerator1;
		denominator = this->denominator * denomirator1;
		denomirator1 == this->denominator * denomirator1;
		return fraction(this->numerator + numerator1, denominator);
	}
	return fraction();
}


fraction fraction::operator-(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator - obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int numerator1 = obj.numerator;
		int denomirator1 = obj.denominator;
		this->numerator = this->numerator * denomirator1;
		numerator1 = this->denominator * numerator1;
		denominator = this->denominator * denomirator1;
		denomirator1 == this->denominator * denomirator1;
		return fraction(this->numerator - numerator1, denominator);
	}
}
fraction::operator float()
{
	if (this->numerator == 0 && this-> denominator == 0)
		return 0;
	if (this-> denominator == 0)
	{
		std::cout << "ERROR" << std::endl;
		return FLT_MAX;
	}
	return (float)this-> numerator / (float)this-> denominator;
}

void fraction::show()
{
	std::cout << this->numerator;
	std::cout << "/";
	std::cout << this->denominator << std::endl;
}

fraction fraction::operator*(const fraction& obj)
{
	return fraction(this->numerator * obj.numerator , this->denominator * obj.denominator);
}

fraction fraction::operator/(const fraction& obj)
{
	return fraction(this->numerator * obj.denominator, this ->denominator * obj.numerator);
}

fraction fraction::operator+(const int& value)
{
	return fraction();
}

fraction fraction::operator-(const int& value)
{
	return fraction();
}
