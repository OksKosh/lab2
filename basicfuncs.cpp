#include "basicfuncs.h"

#include <iostream>
#include <bitset>
#include <cmath>

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
	MEMORYSTATUS status;
	GlobalMemoryStatus(&status);
	
	std::cout << "Percentage of physical memory in use: " << status.dwMemoryLoad << "\n";
	std::cout << "Actual physical memory: " << status.dwTotalPhys / pow(2, 30) << " Gbytes\n";
	std::cout << "Physical memory currently available: " << status.dwAvailPhys / pow(2, 30) << " Gbytes\n";
	std::cout << "Commited memory limit: " << status.dwTotalPageFile / pow(2, 30) << " Gbytes\n";
	std::cout << "Current process can commit " << status.dwAvailPageFile / pow(2, 30) << " Gbytes\n";
	std::cout << "User-mode portion of virtual adress space: ";
	std::cout << status.dwTotalVirtual / pow(2, 30) << " Gbytes\n";
	std::cout << "Unreserved and uncommited virtual memory: ";
	std::cout << status.dwAvailVirtual / pow(2, 30) << " Gbytes\n";
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
