#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>

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

void HappyBirthday(std::string name, int age);

double square(double length);

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

	// Type conversion = conversion a value of one data type to another
	//					Implicit = automatic
	//					Explicit = Precede value with new data type (int)

	//Implicit
	int pi_1 = 3.14;
	std::cout << pi_1 << "\n"; //3

	char c = 100;
	std::cout << c << "\n"; //d on ASCII table

	//Explicit
	double pi_2 = (int)3.14;
	std::cout << pi_2 << "\n"; //3

	int correct = 8;
	int questions = 10;
	double score = (double)correct / (double)questions * 100;

	std::cout << score << "%" << "\n" << std::endl;

	// User input
	//cin >> (extraction operator)

	std::string nameInput;
	int ageInput;
	
	//std::cout << "Whars your age?: ";
	//std::cin >> ageInput;

	//std::cout << "What's your full name?: ";
	//std::getline(std::cin >> std::ws, nameInput);

	//std::cout << std::endl << "Hello " << nameInput << "\n";
	//std::cout << "You're " << ageInput << " years old";

	// Useful math functions

	x = 3.99;
	y = 4;
	double z;

	//z = std::max(x_2, y_2);
	//z = std::min(x_2, y_2);
	//z = pow(2, 4);
	//z = sqrt(9);
	//z = abs(-56);
	//z = round(x_2);
	//z = ceil(x_2);
	z = floor(x);

	std::cout << z << "\n" << std::endl;

	// Hypotenuse calculator

	//double sideA;
	//double sideB;
	//double hypotenuse;

	//std::cout << "Enter side A: ";
	//std::cin >> sideA;

	//std::cout << "Enter side B: ";
	//std::cin >> sideB;

	//hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));

	//std::cout << "Hypotenuse = " << hypotenuse << "\n" << std::endl;

	// if statement

	//std::cout << "Enter your age: ";
	//std::cin >> ageInput;

	//if (ageInput >= 100)
	//{
	//	std::cout << "You are too old to enter this site!";
	//}
	//else if (ageInput >= 18)
	//{
	//	std::cout << "Welcome to the site!";
	//}
	//else if(ageInput < 0)
	//{
	//	std::cout << "You haven't been born yet!";
	//}
	//else
	//{
	//	std::cout << "You are not old enough to enter!";
	//}

	// Switch = alternative to using many "else if" statements

	//int month;
	//std::cout << "Enter the month(1-12): ";
	//std::cin >> month;

	//switch (month)
	//{
	//case 1: 
	//	std::cout << "It's January";
	//	break;
	//case 2:
	//	std::cout << "It's February";
	//	break;
	//case 3:
	//	std::cout << "It's March";
	//	break;
	//case 4:
	//	std::cout << "It's April";
	//	break;
	//case 5:
	//	std::cout << "It's May";
	//	break;
	//case 6:
	//	std::cout << "It's June";
	//	break;
	//case 7:
	//	std::cout << "It's July";
	//	break;
	//case 8:
	//	std::cout << "It's August";
	//	break;
	//case 9:
	//	std::cout << "It's September";
	//	break;
	//case 10:
	//	std::cout << "It's October";
	//	break;
	//case 11:
	//	std::cout << "It's November";
	//	break;
	//case 12:
	//	std::cout << "It's December";
	//	break;

	//default:
	//	std::cout << "Please enter in only numbers (1-12)";
	//	break;
	//}

	//std::cout << "What letter grade?: ";
	//std::cin >> grade;

	//switch (grade)
	//{
	//case 'A':
	//	std::cout << "You did great!";
	//	break;
	//case 'B':
	//	std::cout << "You did good";
	//	break;
	//case 'C':
	//	std::cout << "You did okay";
	//	break;
	//case 'D':
	//	std::cout << "You did not do good";
	//	break;
	//case 'F':
	//	std::cout << "YOU FAILED";
	//	break;

	//default:
	//	std::cout << "Please enter in a letter grade (A-F)";
	//	break;
	//}
	
	// Simple calculator program

	//char op;
	//double num1;
	//double num2;
	//double result;

	//std::cout << "********** CALCULATOR **********\n";

	//std::cout << "Enter either (+ - * /): ";
	//std::cin >> op;

	//std::cout << "Enter #1: ";
	//std::cin >> num1;

	//std::cout << "Enter #2: ";
	//std::cin >> num2;

	//switch (op)
	//{
	//case '+':
	//	result = num1 + num2;
	//	std::cout << "Result: " << result << '\n';
	//	break;
	//case '-':
	//	result = num1 - num2;
	//	std::cout << "Result: " << result << '\n';
	//	break;
	//case '*':
	//	result = num1 * num2;
	//	std::cout << "Result: " << result << '\n';
	//	break;
	//case '/':
	//	result = num1 / num2;
	//	std::cout << "Result: " << result << '\n';
	//	break;

	//default:
	//	std::cout << "Please enter a valid operator" << '\n';
	//	break;
	//}

	//std::cout << "********************************\n";

	// Ternary operator ?: = replacement to an if/else statement
	// condition ? expression1 : expression2;
	
	grade = 75;
	
	grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
	std::cout << "\n";

	int number = 9;
	number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
	std::cout << "\n";

	bool hungry = true;
	//hungry ? std::cout << "You are hungry!" : std::cout << "You are full!";
	std::cout << (hungry ? "You are hungry!" : "You are full!") << "\n" << std::endl;

	// Logical Operators
	// && = check if two conditions are true
	// || = check if at least one of two conditiond is true
	// ! = reverses the logical state of its operand

	//int temp;
	bool sunny = true;

	/*std::cout << "Enter the temperature: ";
	std::cin >> temp;

	if (temp <= 0 || temp >= 30)
	{
		std::cout << "The temperature is bad!";
	}
	else
	{
		std::cout << "The temperature is good!";
	}

	if (!sunny)
	{
		std::cout << "It is cloudy outside!";
	}
	else
	{
		std::cout << "Its sunny outside";
	}*/
	 
	// TEMPERATURE CONVERTER PROGRAM

	double temp;
	char unit;

	//std::cout << "***** TEMPERATURE CONVERSION *****\n";
	//std::cout << "F = Fahrenheit\n";
	//std::cout << "C = Celsius\n";
	//std::cout << "What unit would you like to conversion to: ";
	//std::cin >> unit;

	//if (unit == 'F'	 || unit == 'f')
	//{
	//	std::cout << "Enter the temperature in Celsius: ";
	//	std::cin >> temp;

	//	temp = (1.8 * temp) + 32.0;
	//	std::cout << "Temperature is: " << temp << "F\n";
	//}
	//else if (unit == 'C' || unit == 'c')
	//{
	//	std::cout << "Enter the temperature in Fahrenheit: ";
	//	std::cin >> temp;

	//	temp = (temp - 32) / 1.8;
	//	std::cout << "Temperature is: " << temp << "C\n";
	//}
	//else
	//{
	//	std::cout << "Please enter only C or F\n";
	//}
	//std::cout << "**********************************\n";

	// USEFUL STRING METHODS

	//std::cout << "Enter your name: ";
	//std::getline(std::cin, name);

	//if (name.length() > 12)
	//{
	//	std::cout << "Your name can't be over 12 characters";
	//}
	//else if (name.empty())
	//{
	//	std::cout << "Invalid name";
	//}
	//else
	//{
	//	std::cout << "Welcome " << name << "!!!";
	//}

	//name.clear();

	//name.append("@gmail.com");

	//std::cout << "Welcome " << name.at(0) << "!!!\n";

	//name.insert(0, "@");

	//std::cout << name.find(' ') << "\n";

	//name.erase(0, 3);

	//std::cout << "Welcome " << name << "!!!";

	// WHILE LOOPS

	//name.clear();

	//while(name.empty())
	//{
	//	std::cout << "enter your name: ";
	//	std::getline(std::cin, name);

	//}

	// DO WHILE LOOPS

	/*number == 0;

	do
	{
		std::cout << "Enter a positive #: ";
		std::cin >> number;
	} while (number < 0);

	std::cout << "The # is: " << number;*/

	//For Loops

	for (int i = 10; i >= 0; i--)
	{
		std::cout << i << "\n";
	}

	std::cout << "HAPPY NEW YEAR!!" << "\n\n";

	// BREAK & CONTINUE

	// break = break out of a loop
	// continue = skip current iterarion

	for (int i = 1; i <= 20; i++)
	{
		if (i == 13)
		{
			continue;
		}

		std::cout << i << "\n";
	}

	// NESTED LOOP
	// Loop inside a loop

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			std::cout << j << ' ';
		}

		std::cout << "\n";
	}
	std::cout << "\n";

	//int rows;
	//int collumns;
	//char symbol;

	//std::cout << "How many rows?: ";
	//std::cin >> rows;

	//std::cout << "How many columns?: ";
	//std::cin >> collumns;

	//std::cout << "Insert a asymbol to use: ";
	//std::cin >> symbol;

	//std::cout << "\n";

	//for (int i = 1; i <= collumns; i++)
	//{
	//	for (int i = 1; i <= rows; i++)
	//	{
	//		std::cout << symbol;
	//	}

	//	std::cout << "\n";
	//}

	// RANDOM NUMBER GENERATOR
	// Pseudo-random = NOT truly random (but close)

	srand(time(NULL));

	int num1 = (rand() % 6) + 1;
	int num2 = (rand() % 6) + 1;
	int num3 = (rand() % 6) + 1;

	std::cout << num1 << '\n';
	std::cout << num2 << '\n';
	std::cout << num3 << "\n\n";

	srand(time(0));
	int randNum = (rand() % 5) + 1;

	switch (randNum)
	{
		case 1: 
			std::cout << "You win a bumper sticker!\n";
			break;
		case 2:
			std::cout << "You win a t-shirt!\n";
			break;
		case 3:
			std::cout << "You win a free lunch!\n";
			break;
		case 4:
			std::cout << "You win a gift card!\n";
			break;
		case 5:
			std::cout << "You win a concert tickets!\n";
			break;
	}
	std::cout << "\n\n";

	// NUMBER GUESSING GAME

	/*int num;
	int guess;
	int tries = 0;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	std::cout << "****** NUMBER GUESSING GAME ******\n";

	do
	{
		std::cout << "Enter a guess between (1-100): ";
		std::cin >> guess;
		tries++;

		if (guess > num)
		{
			std::cout << "Too high!\n";
		}
		else if (guess < num)
		{
			std::cout << "Too low!\n";
		}
		else
		{
			std::cout << "CORRECT! # of tries: " << tries << "\n\n";
		}

	} while (guess != num);

	std::cout << "**********************************\n";*/

	// FUNCTIONS
	// Function = a block of reusable code

	name = "Mateus";
	age = 21;

	HappyBirthday(name, age);

	// RETURN KEYWORD
	// return = return a value back to the spot
	//			where you called the encompassing function

	double length = 5.0;
	double area = square(length);

	std::cout << "Area: " << area << "cm^2\n";

	return 0;
}

void HappyBirthday(std::string name, int age)
{
	std::cout << "Happy Birthday to you!!\n";
	std::cout << "Happy Birthday to you!!\n";
	std::cout << "Happy Birthday dear " << name << "!!\n";
	std::cout << "Happy Birthday to you!!\n";
	std::cout << "Happy Birthday to you!!\n";
	std::cout << "You are " << age << " years old!!\n\n";
}

double square(double length)
{
	return length * length;
}
