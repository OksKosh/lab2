#include "basicfuncs.h"

#include <iostream>
#include <bitset>
#include <cmath>

void get_system_info() {
	SYSTEM_INFO info;
	GetSystemInfo(&info);
	
	std::cout << "The processor architecture is ";
	std::cout << PROCESSOR_ARCHITECTURE[info.wProcessorArchitecture] << "\n";
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
	MEMORY_BASIC_INFORMATION info;
	
	SYSTEM_INFO sys_info;
	GetSystemInfo(&sys_info);

	std::cout << "Enter memory address in range from ";
    std::cout << sys_info.lpMinimumApplicationAddress << " to ";
    std::cout << sys_info.lpMaximumApplicationAddress << "\n";

	DWORD64 address;
	std::cin >> address;	

	if (!VirtualQuery((LPCVOID)address, &info, sizeof(info))) {
		std::cout << "Can not get this address space status";
		return;
	}
	
    std::cout << "Base address: " << info.BaseAddress << "\n";
    std::cout << "Allocation base address: " << info.AllocationBase << "\n";
    
    std::cout << "Protection option value on initial alloc: ";
	std::cout <<  info.AllocationProtect << "\n";
	std::cout << "Meaning:\n";
    for (auto el : PROTECT_CONSTANTS) {
        if (info.AllocationProtect & el.first) {
            std::cout << el.second << "\n";
        }
    }

    std::cout << "Region size: " << info.RegionSize << " bytes\n";
    
    std::cout << "Page state value: " << info.State << "\n";
    std::cout << "Meaning:\n";
    for (auto el : STATE) {
        if (info.State & el.first) {
            std::cout << el.second << "\n";
        }
    }
	
	std::cout << "Access protection value: ";
	std::cout <<  info.Protect << "\n";
	std::cout << "Meaning:\n";
    for (auto el : PROTECT_CONSTANTS) {
        if (info.Protect & el.first) {
            std::cout << el.second << "\n";
        }
    }

    std::cout << "Page type value: " << info.Type << "\n";
	std::cout << "Meaning:\n";
    for (auto el : TYPE) {
        if (info.Type & el.first) {
            std::cout << el.second << "\n";
        }
    }
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
