// Louai Hammad
// ch1.6.cpp

#include <iostream>
#include <string>

int main() {
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
    return 0;
}

/*
 * If "Samuel Beckett" is entered the first time, name will be set to "Samuel"
 * because cin will discard all whitespace before a sequence of characters and
 * will stop reading them into the variable after it sees a whitespace.
 */

/*
 * After running the program, I see that I failed to realize that by writing
 * "Samuel Beckett" to cin and only reading in one sequence of nonwhitespace
 * characters will leave another sequence of nonwhitespace characters in the 
 * buffer ("Beckett") which is then read in the second time cin >> name is
 * called.
 */

