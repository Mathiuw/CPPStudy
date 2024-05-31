#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

namespace first 
{
	int x = 4;
}

namespace second 
{
	int x = 2;
}

int main() 
{
	// This is a comment

	/*
		This
		is
		a
		multi-line
		comment
	*/

	std::cout << "Hello World! \n";
	std::cout << "How are you? \n\n";

	int x = 5;
	int y = 6;
	int sum = x + y;

	std::cout << x << "\n";
	std::cout << y << "\n";
	std::cout << sum << "\n\n";

	// integer (whole numbers)
	int age = 21;
	int year = 2023;
	int days = 7;

	std::cout << age << "\n";
	std::cout << year << "\n";
	std::cout << days << "\n\n";

	// double (numbers including decimal)
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;

	std::cout << price << "\n";
	std::cout << gpa << "\n";
	std::cout << temperature << "\n\n";

	// char (single character)
	char grade = 'A';
	char initial = 'C';
	char currency = '$';

	std::cout << grade << "\n";
	std::cout << initial << "\n";
	std::cout << currency << "\n\n";

	// boolean (true or false)
	bool student = false;
	bool power = true;
	bool forSale = true;

	// strings (Objects that represents a sequence of text)
	std::string name = "Mateus";
	std::string day = "Friday";
	std::string food = "Lasagna";
	std::string address = "Lugar sla, 69";

	std::cout << "Hello " << name << "\n";
	std::cout << "You are " << age << " years old" << "\n\n";

	// const
	// The const keyword specifies that a variable's value is constant
	// tells the compiler to prevent anything from modifting it
	// (read-only)

	const double PI = 3.14159;
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;

	double radius = 10;
	double circunference = 2 * PI * radius;

	std::cout << circunference << "cm" << "\n\n";

	// Namespace = provides a solution for preventing name conflicts
	//			   in large projects. Eacg entity needs a unique name.
	//			   A namespace allows for identically named entities 
	//			   as long as the namespaces are different

	std::cout << x << "\n";
	std::cout << first::x << "\n";
	std::cout << second::x << "\n\n";

	// typedef = reserved keyword used to create an additional name
	//			 (alias) for another data type.
	//			 New identifier for an existing type
	//			 Helps with readability and reduced typos
	//			 Use when there is a clear benefit
	//			 Replaced with 'using' (work better w/ templates)

	pairlist_t pairlist;
	text_t firstName = "Mateus";
	number_t myAge = 21;

	std::cout << firstName << "\n";
	std::cout << myAge << "\n" << std:: endl;

	// arithmetic operators = return the result of a specific
	//						  aritmetic operation (+ - * /)

	int students = 20;

	//student = student + 1
	//students += 1;
	//students++;

	//students = student - 1;
	//students -= 1;
	//students--;

	//students = students * 2;
	//students *= 2;

	//students = students / 2;
	//students /= 2;

	std::cout << students << "\n";

	//Resto
	int remainder = students % 3;

	std::cout << "Remainder = " << remainder << "\n";

	// Order to execute
	// parenthesis
	// multuplication & devision
	// addition & subtraction

	students = 6 - 5 + 4 * 3 / 2;
	std::cout << students << "\n" << std::endl;

	return 0;
}