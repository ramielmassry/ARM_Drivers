/*******************************************************************/
/***************		Author: RAMI EL MASSRY	  ******************/
/***************		Layer: HAL				  ******************/
/***************		SWC: RELAY				  ******************/
/***************		Version: 1.00			  ******************/
/*******************************************************************/

#include "Relay.h"

void Relay_SetState(Relay_Type Relay, Relay_StateType State)
{
	Dio_WriteChannel((Dio_ChannelType) Relay, State);
}

void Relay_ToggleState(Relay_Type Relay)
{
	Dio_ToggleChannel((Dio_ChannelType)Relay);
}