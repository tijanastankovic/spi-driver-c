#include "spi.h"

int main(void)
{
  spi_init();

  uint8_t received_data;

  while (1) 
  {
    received_data = spi_transfer_byte(0x55);
  }
  
  return 0;
}
