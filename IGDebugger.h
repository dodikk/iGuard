#ifndef iGuard_IGDebugger_h
#define iGuard_IGDebugger_h

#ifdef PT_DENY_ATTACH
#undef PT_DENY_ATTACH
#define PT_DENY_ATTACH 31


//ptrace(PT_DENY_ATTACH, 0, 0, 0);
#ifdef DISABLE_DEBUGGER
#undef DISABLE_DEBUGGER

#if TARGET_OS_IPHONE && !DEBUG
   #define DISABLE_DEBUGGER() \
   __asm__ __volatile__ (         \
   "mov r0, #31"   \  
   "mov r1, #0"    \
   "mov r2, #0"    \
   "mov r3, #0"    \
   "mov ip, #26"   \  
   "svc #0x80"     \  
   )
#else
   #define DISABLE_DEBUGGER()
#endif


#endif
