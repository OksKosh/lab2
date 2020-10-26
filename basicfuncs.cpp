#include "basicfuncs.h"

#include <iostream>
#include <bitset>

void get_system_info() {
	SYSTEM_INFO info;
	GetSystemInfo(&info);
	
	for (auto el: PROCESSOR_ARCHITECTURE) {
	    if (el.first == info.wProcessorArchitecture) {
	        std::cout << "The processor architecture is " << el.second << "\n";
	    }
	}
	
	std::cout << "Page size: " << info.dwPageSize << "\n";
	std::cout << "Pointer to the lowest adress accesible: ";
	std::cout << info.lpMinimumApplicationAddress << "\n";
	std::cout << "Pointer to the highest adress accesible: ";
	std::cout << info.lpMaximumApplicationAddress << "\n";
	std::cout << "Bitmask of set of processors: ";
	std::cout << std::bitset<8 * sizeof(DWORD)>(info.dwActiveProcessorMask) << "\n";
	std::cout << "Number of processors: " << info.dwNumberOfProcessors << "\n";
	std::cout << "Allocation granularity: " << info.dwAllocationGranularity << "\n";
	std::cout << "Processor level: " << info.wProcessorLevel << "\n";
	std::cout << "Processor revision: " << info.wProcessorRevision << "\n";
}

void get_memory_status() {
	
}

void get_space_status() {
	
}

void reserve_region() {
	
}

void alocate_region() {
	
}

void write_to_space() {
	
}

void set_protect() {
	
}

void free_region() {
	
}
