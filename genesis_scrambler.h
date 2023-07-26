/* 
 * File:   scrambler.h
 * Author: Gabriel Otero Pérez
 *
 * Created on November 14, 2019, 9:27 PM
 */

#include <stdint.h>

#ifndef SCRAMBLER_H
#define	SCRAMBLER_H

void SelfSyncScrambler(uint8_t* data, uint16_t length);
void SelfSyncDeScrambler(uint8_t* data, uint16_t length);

#endif	/* SCRAMBLER_H */

