#ifndef __CPU_H__
#define __CPU_H__

void cpuDriver_EnableGlobalInterrupt(void);
void cpuDriver_DisableGlobalInterrupt(void);
void CpuDriver_StartCriticalSection(void);
void CpuDriver_StopCriticalSection(void);

#endif