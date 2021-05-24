/* sc_memoryLoad.c */

#include "MemFuncReg.h"
#include <stdio.h>

int sc_memoryLoad(char* filename){
     FILE *fp= fopen( filename, "rb");
    fread(a,sizeof(int),100,fp);
    fclose(fp);
    return 0;
}
