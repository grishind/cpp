#include <iostream>

int main() {
	std::cout << "long long 1e17: " << (long long)1e17 << "\n";
	std::cout << "long long 1e18: " << (long long)1e18 << "\n";
	std::cout << "long long 1e19: " << (long long)1e19 << "\n";
	std::cout << "long long 1e20: " << (long long)1e20 << "\n";
	std::cout << "print 1e18 + 1: " << 1e18 + 1 << "\n";
	std::cout << "Wonder what will happen: " << (long long)(1e18 + 1) << "\n";
	std::cout << "Addition works?: " << ((1e18 < 1e18 + 1) ? "Yup" : "Nah") << "\n";
	return 0; 
}
