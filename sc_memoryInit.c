/* sc_memoryInit.c */

#include "MemFuncReg.h"
#include <stdio.h>

int sc_memoryInit(){
     for(int i=0;i<100;i++){
         a[i]=0;
       }
     return *a;
}

