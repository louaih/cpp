// Louai Hammad
// ch1.3.cpp

#include <iostream>
#include <string>

int main() {
	{ const std::string s = "a string";
		std::cout << s << std::endl; }

	{ const std::string s = "another string";
		std::cout << s << std::endl; }
	return 0;
}

/*
 * This is a valid program because the scope of s ends at the end of the curly
 * braces that it's enclosed in.
 */

