/* sc_regSet.c */

#include "MemFuncReg.h"
#include <stdio.h>

int sc_regSet(int Register, int value){
	switch(value){
		case M:
		case O:
		case P:
		case T:
		case E:{
			Register |= value;
		}
		break;
		default:{
		return E;
		}
		break;
	}
	return 0;
}
