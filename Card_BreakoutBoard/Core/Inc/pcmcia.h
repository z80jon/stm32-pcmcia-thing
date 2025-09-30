

#ifndef PCMCIA_H_
#define PCMCIA_H_

#include <stdint.h>
#include <stdbool.h>

typedef enum {
    DATA_XFER_TYPE_8BIT_HIGH,
    DATA_XFER_TYPE_8BIT_LOW,
    DATA_XFER_TYPE_16BIT
} data_xfer_type_t;

typedef enum {
    TRANSFER_READ,
    TRANSFER_WRITE
} transfer_type_t;

typedef enum {
    data_xfer_type_t data_xfer_type;
    transfer_type_t transfer_type;
    uint32_t address;
    uint16_t data;  //< May be only 8 bits if data_xfer_type is 8BIT_HIGH or 8BIT_LOW
} pcmcia_transfer_t;


void pcmcia_init();

void pcmcia_getTransfer(pcmcia_transfer_t* transfer);


#endif /* PCMCIA_H_*/