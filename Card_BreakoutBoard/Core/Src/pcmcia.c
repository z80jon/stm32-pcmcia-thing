


#include "main.h"
#include "pcmcia.h"
#include "stm32g4xx_hal_gpio.h"

uint32_t getAddress();
uint8_t getUpper8Bits();
uint8_t getLower8Bits();
uint16_t get16Bits();

void pcmcia_init() {
    //TODO
}

void pcmcia_getTransfer(pcmcia_transfer_t* transfer) {
    //Hold for chip select/device enable

    //Review timing diagram--

    if(/* Read */0) {
        transfer->transfer_type = TRANSFER_READ;
    } else {
        transfer->transfer_type = TRANSFER_WRITE;
    }

    transfer->address = getAddress();
    
}