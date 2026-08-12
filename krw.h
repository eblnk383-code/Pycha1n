#ifndef krw_h
#define krw_h

#include <stdint.h>

void early_kread(uint64_t where, void *read_buf, size_t size);
uint64_t early_kread64(uint64_t where);
void early_kwrite32bytes(uint64_t where, uint8_t writeBuf[0x20]);
void early_kwrite64(uint64_t where, uint64_t what);

#endif
