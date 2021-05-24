/* sc_commandEncode.c */

#include "MemFuncReg.h"
#include <stdio.h>

int sc_commandEncode(int command, int operand, int* value){
     switch(command){
     	case 0x10:
     	case 0x11:
     	case 0x20:
     	case 0x21:
     	case 0x30:
     	case 0x31:
     	case 0x32:
     	case 0x33:
     	case 0x40:
     	case 0x41:
     	case 0x42:
     	case 0x43:{
     	*value = (command<<7)+operand;
     	}break;
     	default:{
     		//cout << "Invalid command" << endl;
		sc_regSet(Registr, E);
		return E;
     	}
     }
	return 0;
}
