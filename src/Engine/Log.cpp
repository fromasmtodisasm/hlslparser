#include "Log.h"
#include "String.h"
#include "../HLSLTree.h"

#include <iostream>

namespace {
   std::string g_lastError;
}

namespace M4
{

void Log_Error(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    char buffer[1024];
    String_Printf(buffer, sizeof(buffer), format, args);

    va_end(args);

    g_lastError = buffer;
}
   
const char* GetLastError() {
    return g_lastError.c_str();
}

}
