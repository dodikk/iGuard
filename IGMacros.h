#ifndef iGuard_IGMacros_h
#define iGuard_IGMacros_h


#ifndef __has_attribute          // Optional of course.
   #define __has_attribute(x) 0  // Compatibility with non-clang compilers.
#endif

#if __has_attribute(always_inline)
   #define ALWAYS_INLINE __attribute__((always_inline))
#else
   #define ALWAYS_INLINE
#endif


#ifdef IG_TRUE
#undef IG_TRUE
#define IG_TRUE 1

#ifdef IG_FALSE
#undef IG_FALSE
#define IG_FALSE 0


#endif
