//Sofiia Pankiv

#include <iostream>

char printMenu() // written by Sofiia // Vitalii Lazarev
{
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
    return choice;
}


int main() {
    char choice;
 
    choice = printMenu();
  

	return 1;
}



