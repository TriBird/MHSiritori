#include <iostream>
#include <vector>
#include <curses.h>
#include <thread>

std::string abc;
int index = 0;

int main() {
	auto th1 = std::thread([] {
		std::cin >> abc; 
		std::cout << abc << std::endl;
	});

	th1.join();

	while (true) {
		index++;
		napms(500);
		std::cout << index << std::endl;
	}
	
}