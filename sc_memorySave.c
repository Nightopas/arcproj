/* sc_memorySave.c */

#include "MemFuncReg.h"
#include <stdio.h>

int sc_memorySave(char* filename){
     FILE *fp= fopen( filename, "wb");
    fwrite(a,sizeof(int),100,fp);
    fclose(fp);
    return 0;

}
