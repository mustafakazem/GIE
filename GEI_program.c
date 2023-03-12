/*
 * GEI_program.c
 *
 * Created: 3/2/2023 10:04:45 AM
 *  Author: sata
 */ 
#include "GEI_int.h"
#include "GEI_priv.h"

void CLI(void){
	SREG&=~(1<<I);
}
void SEI(void){
	SREG|=(1<<I);
}