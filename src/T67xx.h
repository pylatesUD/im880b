/* 
 * File:   T6700.h
 * Author: Alex F. Bustos P.
 *
 * Created on 3 de noviembre de 2017, 19:07
 */

#ifndef T6700_H
#define	T6700_H

#ifdef	__cplusplus
extern "C" {
#endif

//Telaire T67xx CO2 Sensors
#define T67XX_DEFADDR       0x15    //Default Slave Address
#define T67XX_FWREV         5001    //Addressess
#define T67XX_GASPPM        5003
#define T67XX_RESETDVC      1000
#define T67XX_SPCAL         1004
#define T67XX_SLVADDR       4005
#define T67XX_ABCLOGIC      1006
#define T67XX_FWREV_FC      4       //Function Codes
#define T67XX_STATUS_FC     4
#define T67XX_GASPPM_FC     4
#define T67XX_RESETDVC_FC   5
#define T67XX_SPCAL_FC      5
#define T67XX_SLVADDR_FC    6
#define T67XX_ABCLOGIC_FC   5

//Lectura del sensor
unsigned char *T67XX_Read(unsigned char fc,unsigned short address,unsigned char RespLength);

#ifdef	__cplusplus
}
#endif

#endif	/* T6700_H */
