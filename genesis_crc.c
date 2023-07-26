/*
 *                                                       
 * Project     : GENESIS                                            
 * File        : genesis_crc.c
 *
 * Description : GENESIS MCU main program
 *               Gabriel Otero
 * Last update : 10 October 2016                                              
 *                                                                            
*/

#include <stdint.h>

// this function receives a pointer to data an its length
// and returns its crc16

uint16_t crc16(uint8_t* data, uint16_t length){
    
    uint8_t x;
    uint16_t crc = 0xFFFF;

    while (length--){
        x = crc >> 8 ^ *data++;
        x ^= x>>4;
        crc = (crc << 8) ^ ((uint16_t)(x << 12)) ^ ((uint16_t)(x <<5)) ^ ((uint16_t)x);
    }
    return crc;
    
}