/*
 *                                                       
 * Project     : GENESIS                                            
 * File        : genesis_crc.h
 *
 * Description : GENESIS MCU main program
 *               Gabriel Otero
 * Last update : 10 October 2016                                              
 *                                                                            
*/

#include <stdint.h>

#ifndef CRC_H
#define	CRC_H

uint16_t crc16(uint8_t* data_p, uint16_t length);

#endif	/* CRC_H */

