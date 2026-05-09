# SPI Driver in C

## Overview

This project implements a simple SPI (Serial Peripheral Interface) driver in C using memory-mapped register access.

The driver demonstrates low-level embedded programming concepts including:
- memory mapped IO
- hardware register access
- bit manipulation
- polling
- SPI full-duplex communication
- peripheral initialization

The project is designed to simulate how embedded firmware communicates directly with hardware peripherals.

---

## Project Structure

spi-driver-c/
│
├── include/
│   └── spi.h
│
├── src/
│   ├── spi.c
│   └── main.c
│
└── README.md

---

## Features

- SPI peripheral initialization
- SPI transmit function
- SPI receive function
- Full-duplex SPI transfer
- Polling-based communication
- Register-level hardware control

---

## SPI Concepts Demonstrated

### Master Mode

The SPI peripheral is configured as master and generates the communication clock.

### Full-Duplex Communication

SPI transmits and receives data simultaneously during every transfer.

### Polling

The firmware continuously checks hardware status flags before transmitting or receiving data.

### Memory Mapped IO

Hardware registers are accessed directly through memory addresses.

### Bit Manipulation

Bit masks and bitwise operators are used to configure and control hardware registers.

---

## Implemented Functions

### spi_init()

Initializes the SPI peripheral and enables master mode.

### spi_send_byte()

Waits for TX ready status and transmits one byte.

### spi_receive_byte()

Waits for RX ready status and returns the received byte.

### spi_transfer_byte()

Performs simultaneous transmit and receive using SPI full-duplex communication.

---

## Example Application

The demo application continuously performs SPI transfers using:

``` received_data = spi_transfer_byte(0x55); ``` 

The transmitted byte is sent through MOSI while incoming data is simultaneously received through MISO.

## Embedded Concepts Practiced

- Embedded C
- Hardware register access
- Pointer casting
- volatile keyword
- Polling mechanisms
- Bitwise operations
- Peripheral communication
- SPI protocol fundamentals
