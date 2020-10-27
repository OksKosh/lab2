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

std::map<DWORD, std::string> const PROTECT_CONSTANTS {
    {PAGE_NOACCESS, "PAGE_NOACCESS"},
	{PAGE_READONLY, "PAGE_READONLY"},
	{PAGE_READWRITE, "PAGE_READWRITE"},
	{PAGE_EXECUTE_WRITECOPY, "PAGE_EXECUTE_WRITECOPY"},
	{PAGE_EXECUTE, "PAGE_EXECUTE"},
	{PAGE_EXECUTE_READ, "PAGE_EXECUTE_READ"},
	{PAGE_EXECUTE_READWRITE, "PAGE_EXECUTE_READWRITE"},
	{PAGE_EXECUTE_WRITECOPY, "PAGE_EXECUTE_WRITECOPY"},
	{PAGE_GUARD, "PAGE_GUARD"},
	{PAGE_NOCACHE, "PAGE_NOCACHE"},
	{PAGE_WRITECOMBINE, "PAGE_WRITECOMBINE"},
	{PAGE_WRITECOPY, "PAGE_WRITECOPY"},
};

std::map<DWORD, std::string> const STATE {
    {MEM_COMMIT, "MEM_COMMIT"},
	{MEM_FREE, "MEM_FREE"},
	{MEM_RESERVE, "MEM_RESERVE"},
};

std::map<DWORD, std::string> const TYPE {
    {MEM_IMAGE, "MEM_IMAGE"},
	{MEM_MAPPED, "MEM_MAPPED"},
	{MEM_PRIVATE, "MEM_PRIVATE"},
};

#endif //BASICFUNCS_H
