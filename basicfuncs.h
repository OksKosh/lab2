#ifndef BASICFUNCS_H
#define BASICFUNCS_H

#include <map>
#include <windows.h>

void get_system_info();
void get_memory_status();
void get_space_status();
void reserve_region();
void alocate_region();
void write_to_space();
void set_protect();
void free_region();

std::map<WORD, std::string> const PROCESSOR_ARCHITECTURE = {
	{9, "x64 (AMD or Intel)."},
	{5, "ARM."},
	{12, "ARM64."},
	{6, "Intel Itanium-based."},
	{0, "x86."},
	{0xffff, "unknown."},
};
#endif //BASICFUNCS_H
