#include "spi.h"

void spi_init(void)
{
  SPI_CR |= (SPI_ENABLE | SPI_MASTER_MODE);
}

void spi_send_byte(uint8_t data) 
{
  while (!(SPI_SR & SPI_TX_READY))
    {
      // wait
    }
  
  SPI_DR = data;
}

uint8_t spi_receive_byte(void)
{
  while (!(SPI_SR & SPI_RX_READY))
    {
      // wait
    }

  return (uint8_t)SPI_DR;
}

uint8_t spi_transfer_byte(uint8_t data)
{
  while (!(SPI_SR & SPI_TX_READY))
    {
      // wait
    }
  
  SPI_DR = data;

  while (!(SPI_SR & SPI_RX_READY)) 
    {
      // wait
    }

  return (uint8_t)SPI_DR;
}
