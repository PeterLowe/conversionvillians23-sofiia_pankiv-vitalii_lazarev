//Sofiia Pankiv

#include <iostream>


char printMenu() // written by Sofiia
{
    float t_celcius = 0;
    char choice = ' ';// user input  choice
    std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
    std::cout << "[A] Degrees---<--->---Radians        [a]" << std::endl;
    std::cout << "[B] Centimeters-<--->--Feet & Inches  [b]" << std::endl;
    std::cout << "[C] Litres---<--->---Gallons        [c]" << std::endl;
	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celcius <---> Fahrenheit [f]" << std::endl;
    std::cout << "[Q] Exit        [---]   Exit           [q]" << std::endl;
    std::cout << "Enter your Choice : ";
    std::cin >> choice;
    char userChoice; // letter for user to pick conversion
    userChoice = printMenu(); // only print the menu once
    if (userChoice == 'f')
    {
        getTemperature(t_celcius);
    }
    return choice;
}

float getTemperature(float t_celcius)
{
    float t_fahrenheit = 0;
    std::cout << "Enter temperature in fahrenheit: " << std::endl;
    std::cin >> t_fahrenheit;
    t_celcius = (t_fahrenheit - 32) * 5.0 / 9.0;
    std::cout << "Celcius is: " << t_celcius << std::endl;
    return t_celcius;
}


int main() {
    char choice;
    choice = printMenu();


	return 1;
}