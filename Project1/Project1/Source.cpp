//Sofiia Pankiv

#include <iostream>



char printMenu() // written by Sofiia

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
char angle() {
    float angleI;
    float radian;
    float P = 3.14;
    std::cout << "What's the angle in radians: " << std::endl;
    std::cin >> radian ;

    angleI = radian / (P / 180);
    std::cout << radian << " radians is "<< angleI <<" in degrees" << std::endl;
    return angleI;
}



int main()
{
    float radian;
    float angleI;
    char choice;
 
    choice = printMenu();

    if (choice == 'a')
    {
        angleI = angle();
    }

	return 1;
}



