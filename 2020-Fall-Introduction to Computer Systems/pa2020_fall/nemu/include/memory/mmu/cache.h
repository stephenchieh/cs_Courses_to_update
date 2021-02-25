#ifndef __CACHE_H__
#define __CACHE_H__

#include "nemu.h"

#ifdef CACHE_ENABLED
typedef struct 
{
    unsigned int valid_bit : 1; //标志位
    uint32_t tag : 7;           //标记
    uint8_t data[64];           //数据
}CacheLine;

extern CacheLine CaChe[];

// init the cache
void init_cache();

// write data to cache
void cache_write(paddr_t paddr, size_t len, uint32_t data);

// read data from cache
uint32_t cache_read(paddr_t paddr, size_t len);

#endif

#endif
