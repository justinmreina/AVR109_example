/************************************************************************************************************************************/
/** @file		serial.c
 * 	@brief		UART communication routines
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
#include "defines.h"


/************************************************************************************************************************************/
/**	@fcn		void initbootuart(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
void initbootuart(void) {

	BAUD_RATE_LOW_REG = BRREG_VALUE;
	UART_CONTROL_REG = (1 << ENABLE_RECEIVER_BIT) | (1 << ENABLE_TRANSMITTER_BIT); // enable receive and transmit 	

	return;
}


/************************************************************************************************************************************/
/**	@fcn		void sendchar(unsigned char c)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
void sendchar(unsigned char c) {

  UART_DATA_REG = c;														/* prepare transmission									*/
  while (!(UART_STATUS_REG & (1 << TRANSMIT_COMPLETE_BIT)));				/* wait until byte sent									*/
  UART_STATUS_REG |= (1 << TRANSMIT_COMPLETE_BIT);							/* delete TXCflag										*/

  return;
}


/************************************************************************************************************************************/
/**	@fcn		unsigned char recchar(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
unsigned char recchar(void) {

	//Wait for data
	while(!(UART_STATUS_REG & (1 << RECEIVE_COMPLETE_BIT))) {
	};
  
	return UART_DATA_REG;
}

