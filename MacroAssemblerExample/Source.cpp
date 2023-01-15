#include <iostream>

int CPPFunc(int a, int b) {
	return a + b;
}
extern "C" int MASMFunc(int a, int b);

int main() {
	std::cout << "3 + 4 = " << CPPFunc(3, 4) << '\n';
	std::cout << "1 + 2 = " << MASMFunc(1, 2) << '\n';
}