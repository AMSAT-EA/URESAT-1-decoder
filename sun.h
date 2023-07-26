/*
 * sun.h
 *
 *  Created on: 9 jul. 2022
 *      Author: felix.paez
 */

#ifndef SRC_SUN_H_
#define SRC_SUN_H_

#define NF 8  //number of sampling frequencies
#define NS 6  //number of samplings
#define ND 8  //number of detectors

#pragma pack(1) // force 1-byte-alignment
typedef struct _sunvector {
    uint16_t  td    [NS]; //0..3200.0segundos entre muestras
    uint16_t   v[ND][NS];
    uint16_t   p[ND];
    uint8_t  err[ND];
    //u8  theta;
    //u8  phi;
    //u8  spin_ab,spin_cd,spin_ef;
    } __attribute__((packed, scalar_storage_order("big-endian"))) SUNVECTOR;


void SunVectorTrigger(void);
void SunVectorReset(void);
void SunVectorRead(void);

#endif /* SRC_SUN_H_ */
