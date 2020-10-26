#include <iostream>
#include <limits>

#include "basicfuncs.h"

int get_option() {
	std::cout << "\nEnter option:\n";
	std::cout << "1 - Get system info\n";
	std::cout << "2 - Get memory status\n";
	std::cout << "3 - Get adress space status\n";
	std::cout << "4 - Reserve region\n";
	std::cout << "5 - Alocate region\n";
	std::cout << "6 - Write to adress space\n";
	std::cout << "7 - Set protection on region\n";
	std::cout << "8 - Free region\n";
	std::cout << "0 - Exit\n";
	
	int option = 0;
	std::cin >> option;
	
	while (std::cin.fail() || option > 11 || option < 0) {
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
		std::cout << "Incorrect option. Please, try again\n";		
		std::cin >> option;
	}
	
	return option;
}

void (*function_pointers[9])() = {
	nullptr,
	get_system_info,
	get_memory_status,
	get_space_status,
	reserve_region,
	alocate_region,
	write_to_space,
	set_protect,
	free_region,
};

int main() {
	int option = 0;
	
	while ((option = get_option()) != 0) {
		(*function_pointers[option])();
	}
	
	return 0;
}
