


#ifndef SPI_H_
#define SPI_H_

#include "SPI_CONFIG.h"


void SPI_Init(void);
void SPI_Transmit(uint8_t data);
uint8_t SPI_Receive(void);
void SPI_SlaveSelect(uint8_t slave);


#endif /* SPI_H_ */