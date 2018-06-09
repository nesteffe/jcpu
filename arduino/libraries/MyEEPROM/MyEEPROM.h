#ifndef _MYEEPROM_H
#define _MYEEPROM_H
#include <stdint.h>

extern class MyEEPROM {
public:
  void init();
  static unsigned char read_eeprom(uint32_t address);
  void write_eeprom(uint32_t address, unsigned char value);
  void dump_eeprom(uint32_t start_address, uint32_t end_address);
  void sector_erase(uint32_t sectorNum);
  void chip_erase();
} MyEEPROM;

#endif
