// Louai Hammad
// nameframe.cpp

#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    std::string middle = " Hello, " + name + "! ";
    std::string first(middle.size(), '*');
    std::string second(middle.size(), ' ');

    std::cout << '*' + first + '*' << std::endl;
    std::cout << '*' + second + '*' << std::endl;
    std::cout << '*' + middle + '*' << std::endl;
    std::cout << '*' + second + '*' << std::endl;
    std::cout << '*' + first + '*' << std::endl;

    return 0;
}

