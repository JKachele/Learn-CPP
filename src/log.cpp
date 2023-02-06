/*Project-------Learn_CPP
 *File----------Log.cpp
 *Author--------Justin Kachele
 *Date----------11/11/2022
 *License-------GNU GENERAL PUBLIC LICENSE
******************************************/
#include <iostream>
#include <cstdarg>
#include "log.h"

void logInternal(const char *file, int line, const char *format, ...) {
    std::cout << file << ":Line# " << line << std::endl;
    std::cout << "\t";
    va_list argptr;
    va_start(argptr, format);
    vprintf(format, argptr);
    va_end(argptr);
    std::cout << std::endl;
}
