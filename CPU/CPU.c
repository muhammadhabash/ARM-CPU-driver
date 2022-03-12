#include "CPU.h"

void cpuDriver_EnableGlobalInterrupt(void)
{
	asm("CPSIE i");
}

void cpuDriver_DisableGlobalInterrupt(void)
{
	asm("CPSID i");
}

void CpuDriver_StartCriticalSection(void)
{
	asm(                               
        "MRS R0, PRIMASK       \n"     
        "CPSID i               \n"     
        "PUSH {R0}             \n"     
        );
}                           
    
void CpuDriver_StopCriticalSection(void)
{
	asm(                            
        "POP {R0}              \n"    
        "MSR PRIMASK, R0       \n"    
        );
}                             