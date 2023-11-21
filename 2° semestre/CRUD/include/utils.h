#include "./main.h"

#ifndef UTILS_H
#define UTILS_H

#ifdef _WIN32
    #define CLEAR "cls"
#elif __linux__
    #define CLEAR "clear"
#else
    #define CLEAR "Outro"
#endif

bool validaData(const char *data);

#endif  // UTILS_H
