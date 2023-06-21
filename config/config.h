/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

#ifdef __APPLE__
#include <TargetConditionals.h>
#endif

/* Get CPU Info by asm method */
/* #undef CPU_INFO_BY_ASM */

/* Get CPU Info by c method */
/* #undef CPU_INFO_BY_C */

/* Custom modes */
/* #undef CUSTOM_MODES */

/* Do not build the float API */
/* #undef DISABLE_FLOAT_API */

/* Disable bitstream fixes from RFC 8251 */
/* #undef DISABLE_UPDATE_DRAFT */

/* Assertions */
/* #undef ENABLE_ASSERTIONS */

/* Hardening */
#define ENABLE_HARDENING 1

/* Debug fixed-point implementation */
/* #undef FIXED_DEBUG */

/* Compile as fixed-point (for machines without a fast enough FPU) */
/* #undef FIXED_POINT */

/* Float approximations */
#if TARGET_CPU_ARM || TARGET_CPU_ARM64
#define FLOAT_APPROX 1
#endif

/* Fuzzing */
/* #undef FUZZING */

/* Define to 1 if you have the <alloca.h> header file. */
/* #undef HAVE_ALLOCA_H */

/* NE10 library is installed on host. Make sure it is on target! */
/* #undef HAVE_ARM_NE10 */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `lrint' function. */
#define HAVE_LRINT 1

/* Define to 1 if you have the `lrintf' function. */
#define HAVE_LRINTF 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `__malloc_hook' function. */
/* #undef HAVE___MALLOC_HOOK */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Make use of ARM asm optimization */
/* #undef OPUS_ARM_ASM */

/* Use generic ARMv4 inline asm optimizations */
/* #undef OPUS_ARM_INLINE_ASM */

/* Use ARMv5E inline asm optimizations */
/* #undef OPUS_ARM_INLINE_EDSP */

/* Use ARMv6 inline asm optimizations */
/* #undef OPUS_ARM_INLINE_MEDIA */

/* Use ARM NEON inline asm optimizations */
/* #undef OPUS_ARM_INLINE_NEON */

/* Define if assembler supports EDSP instructions */
/* #undef OPUS_ARM_MAY_HAVE_EDSP */

/* Define if assembler supports ARMv6 media instructions */
/* #undef OPUS_ARM_MAY_HAVE_MEDIA */

// Compiler supports __ARM_NEON
#if __ARM_NEON || __ARM_NEON__

/* Define if compiler supports NEON instructions */
#define OPUS_ARM_MAY_HAVE_NEON 1
/* Compiler supports ARMv7/Aarch64 Neon Intrinsics */
#define OPUS_ARM_MAY_HAVE_NEON_INTR 1

#if TARGET_CPU_ARM || TARGET_CPU_ARM64
/* Define if binary requires NEON intrinsics support */
#define OPUS_ARM_PRESUME_NEON_INTR 1
#endif

#if TARGET_CPU_ARM64
/* Define if binary requires Aarch64 Neon Intrinsics */
#define OPUS_ARM_PRESUME_AARCH64_NEON_INTR 1
#endif

#endif // __ARM_NEON || __ARM_NEON__

/* Define if binary requires EDSP instruction support */
/* #undef OPUS_ARM_PRESUME_EDSP */

/* Define if binary requires ARMv6 media instruction support */
/* #undef OPUS_ARM_PRESUME_MEDIA */

/* Define if binary requires NEON instruction support */
/* #undef OPUS_ARM_PRESUME_NEON */

/* This is a build of OPUS */
#define OPUS_BUILD /**/

/* Run bit-exactness checks between optimized and c implementations */
/* #undef OPUS_CHECK_ASM */

/* Use run-time CPU capabilities detection */
/* #undef OPUS_HAVE_RTCD */

#if TARGET_CPU_X86_64

/* Compiler supports X86 AVX Intrinsics */
#ifdef __AVX__
#define OPUS_X86_MAY_HAVE_AVX 1
#endif

/* Compiler supports X86 SSE Intrinsics */
#ifdef __SSE__
#define OPUS_X86_MAY_HAVE_SSE 1
#endif

/* Compiler supports X86 SSE2 Intrinsics */
#ifdef __SSE2__
#define OPUS_X86_MAY_HAVE_SSE2 1
#endif

/* Compiler supports X86 SSE4.1 Intrinsics */
#ifdef __SSE4_1__
#define OPUS_X86_MAY_HAVE_SSE4_1 1
#endif

/* Define if binary requires AVX intrinsics support */
/* #undef OPUS_X86_PRESUME_AVX */

/* Define if binary requires SSE intrinsics support */
#define OPUS_X86_PRESUME_SSE 1

/* Define if binary requires SSE2 intrinsics support */
#define OPUS_X86_PRESUME_SSE2 1

/* Define if binary requires SSE4.1 intrinsics support */
#define OPUS_X86_PRESUME_SSE4_1 1

#endif // TARGET_CPU_X86_64

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "opus@xiph.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "opus"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "opus 1.4-6-g9fc8fc4c"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "opus"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4-6-g9fc8fc4c"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Make use of alloca */
/* #undef USE_ALLOCA */

/* Use C99 variable-size arrays */
#define VAR_ARRAYS 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif
