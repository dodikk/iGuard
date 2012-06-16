#ifndef iGuard_IGSandbox_h
#define iGuard_IGSandbox_h

#include <iGuard/IGMacros.h>
#include <unistd.h> //used by fork

int IsRunningInAppleSandbox() ALWAYS_INLINE
{ 
   int result = fork();
   if ( 0 == result )
   {
      //Exiting child process. 
      exit(0);
   }

   int isForkSuccessful_ = ( result >= 0 )
   if ( isForkSuccessful_ ) 
   {
      return IG_FALSE;
   }

   return IG_TRUE; 
}

#endif
