#ifndef SPI_H
#define SPI_H

#include <stdint.h>

#define SPI_BASE_ADDR 0x40013000

#define SPI_CR (*(volatile uint32_t*)(SPI_BASE_ADDR + 0x00))
#define SPI_SR (*(volatile uint32_t*)(SPI_BASE_ADDR + 0x04))
#define SPI_DR (*(volatile uint32_t*)(SPI_BASE_ADDR + 0x08))

#define SPI_ENABLE (1U << 0)
#define SPI_MASTER_MODE (1U << 1)

#define SPI_TX_READY (1U << 0)
#define SPI_RX_READY (1U << 1)

void spi_init(void);

void spi_send_byte(uint8_t data);

uint8_t spi_receive_byte(void);

uint8_t spi_transfer_byte(uint8_t data);

#endif
