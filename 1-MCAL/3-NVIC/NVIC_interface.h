/*******************************************************************/
/***************		Author: RAMI EL MASSRY	  ******************/
/***************		Layer: MCAL				  ******************/
/***************		SWC: NVIC				  ******************/
/***************		Version: 1.00			  ******************/
/*******************************************************************/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

void MNVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt (u8 Copy_u8IntNumber);
void MNVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber);
void MNVIC_voidClearPendingFlag (u8 Copy_u8IntNumber);
u8 MNVIC_u8GetActiveFlag        (u8 Copy_u8IntNumber);

#endif