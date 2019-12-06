/************************************************************************************************************************************/
/** @file		serial.h
 * 	@brief		Header file for serial.c
 * 	@details	x
 *
 * 	@notes		x
 *
 * 	@section	Opens
 * 			none current
 *
 * 	@section	Legal Disclaimer
 * 			All contents of this source file and/or any other related source files are the explicit property of Justin Reina.
 * 			Do not distribute. Do not copy.
 */
/************************************************************************************************************************************/
#ifndef _SERIAL_H
#define _SERIAL_H

void initbootuart( void );
void sendchar( unsigned char );
unsigned char recchar( void );

#endif /* _SERIAL_H */

