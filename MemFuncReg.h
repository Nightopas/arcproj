/* MemFuncReg.h */
int a[100];
#define M 0x00001
#define O 0x00010
#define P 0x00100
#define T 0x01000
#define E 0x10000
int sc_memoryInit ();
int sc_memorySet (int address, int value);
int sc_memoryGet (int address, int* value);
int sc_memorySave (char* filename);
int sc_memoryLoad (char* filename);
int sc_regInit (void);
int sc_regSet (int register,int value);
int sc_regGet (int register, int* value);
int sc_commandEncode (int command, int operand, int* value);
int sc_commandDecode (int value, int * command, int * operand);
int Registr = 0x00000;
