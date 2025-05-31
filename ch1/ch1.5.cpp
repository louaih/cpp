// Louai Hammad
// ch1.5.cpp

#include <iostream>
#include <string>

int main() {
	{ 
		std::string s = "a string";
		{ 
			std::string x = s + ", really";
			std::cout << s << std::endl;
			std::cout << x << std::endl;
		}
	}
	return 0;
}

/*
 * The program was invalid because there was an attempt to access x after it
 * was destroyed at the end of the innermost curly braces. The program was 
 * fixed to include the std::cout statement that references x in the inner-
 * most scope.
 */

