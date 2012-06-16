#ifndef iGuard_IGWipers_h
#define iGuard_IGWipers_h

#include <iGuard/IGMacros.h>
#include <string.h>
#import <Foundation/Foundation.h>

static void igWipeUtf8String( NSString* string_ ) ALWAYS_INLINE
{
   CFStringRef rawString_ = (__bridge CFStringRef )string_;

   CFStringEncoding encoding_ = CFStringGetSystemEncoding();
   NSStringEncoding nsEncoding_ = CFStringConvertEncodingToNSStringEncoding( encoding_ );   

   const char* bytesPtr_ = CFStringGetCStringPtr( rawString_, encoding_ );
   unsigned char* buffer_ = ( unsigned char* )bytesPtr_;

   NSUInteger bufferSize_ = [ string_ lengthOfBytesUsingEncoding: nsEncoding_ ];
   memset( buffer_, 0, bufferSize_ );
}

#endif
