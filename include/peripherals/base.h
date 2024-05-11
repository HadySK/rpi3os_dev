#pragma once

#if RPI_VERSION == 3
//peripheral address
#define PBASE 0x3F000000
//bus address is 0x7e000000
#elif RPI_VERSION == 4
#define PBASE 0xFE000000

#else
#define PBASE 0
#error RPI_VERSION NOTDEFINED

#endif