/*******************************************************************/
/***************		Author: RAMI EL MASSRY	  ******************/
/***************		Layer: HAL				  ******************/
/***************		SWC: RELAY				  ******************/
/***************		Version: 1.00			  ******************/
/*******************************************************************/

#ifndef RELAY_H
#define RELAY_H

#include "DIO.h"

typedef Dio_ChannelType Relay_Type;
typedef uint8 Relay_StateType;

void Relay_SetState(Relay_Type Relay, Relay_StateType State);
void Relay_ToggleState(Relay_Type Relay);

#endif