/*Project-------Learn_CPP
 *File----------Log.h
 *Author--------Justin Kachele
 *Date----------11/11/2022
 *License-------GNU GENERAL PUBLIC LICENSE
******************************************/
#ifndef Log_H
#define Log_H

#define Log(str, ...) logInternal(__FILE__, __LINE__, str, __VA_ARGS__)

void logInternal(const char *file, int line, const char *format, ...);

#endif //Log_H
