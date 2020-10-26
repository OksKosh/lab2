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

std::map<int, std::string> PROCESSOR_ARCHITECTURE = {
	{9, "x64 (AMD or Intel)."},
	{5, "ARM."},
	{12, "ARM64."},
	{6, "Intel Itanium-based."},
	{0, "x86."},
	{0xffff, "unknown."},
};

std::map<DWORD, std::string> PROTECT_CONSTANTS {
    {PAGE_NOACCESS, "PAGE_NOACCESS"},
	{PAGE_READONLY, "PAGE_READONLY"},
	{PAGE_READWRITE, "PAGE_READWRITE"},
	{PAGE_EXECUTE_WRITECOPY, "PAGE_EXECUTE_WRITECOPY"},
	{PAGE_EXECUTE, "PAGE_EXECUTE"},
	{PAGE_EXECUTE_READ, "PAGE_EXECUTE_READ"},
	{PAGE_EXECUTE_READ, "PAGE_EXECUTE_READ"},
	{PAGE_EXECUTE_READWRITE, "PAGE_EXECUTE_READWRITE"},
	{PAGE_EXECUTE_WRITECOPY, "PAGE_EXECUTE_WRITECOPY"},
	{PAGE_GUARD, "PAGE_GUARD"},
	{PAGE_NOCACHE, "PAGE_NOCACHE"},
	{PAGE_WRITECOMBINE, "PAGE_WRITECOMBINE"},
};

std::map<DWORD, std::string> STATE {
    {MEM_COMMIT, "MEM_COMMIT"},
	{MEM_FREE, "MEM_FREE"},
	{MEM_RESERVE, "MEM_RESERVE"},
};

std::map<DWORD, std::string> TYPE {
    {MEM_IMAGE, "MEM_IMAGE"},
	{MEM_MAPPED, "MEM_MAPPED"},
	{MEM_PRIVATE, "MEM_PRIVATE"},
};

#endif //BASICFUNCS_H
