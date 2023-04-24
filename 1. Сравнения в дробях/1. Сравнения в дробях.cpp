// 1. Сравнения в дробях.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	//эта функция параметром должна принимать второй объект с которым мы будем сравнивать
	//параметр должен быть константный//передаём второй парамент по ссылке
	bool operator==(const Fraction& other) const {
		return (numerator_ == other.numerator_) && (denominator_ == other.denominator_);
	}
	//конвертируем логическое выражение при помощи !
	bool operator!=(const Fraction& other) const {
		return !(numerator_ == other.numerator_) && (denominator_ == other.denominator_);
	}
	bool operator>(const Fraction& other) const {
		return (numerator_ * other.denominator_ > other.numerator_ * denominator_);
	}

	bool operator<(const Fraction& other) const {
		return (numerator_ * other.denominator_ < other.numerator_* denominator_);
	}
	bool operator>=(const Fraction& other) const {
		return (numerator_ * other.denominator_ >= other.numerator_* denominator_);
	}
	bool operator<=(const Fraction& other) const {
		return (numerator_ * other.denominator_ <= other.numerator_ * denominator_);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
