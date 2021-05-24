/* sc_commandDecode.c */

#include "MemFuncReg.h"
#include <stdio.h>

int sc_commandDecode(int value, int * command, int * operand){
     *command = (value>>7);
     //*operand = (value & 0xFFFFFFF0000000);
     *operand = (value & 0x0000000FFFFFFF);
	return 0;
}
