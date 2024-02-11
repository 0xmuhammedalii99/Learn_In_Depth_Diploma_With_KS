/**
 * [File]               :   Platform_Types.h
 *
 * [Auther]             :   Muhammed Ali Ibrahim Ahmed
 *
 * [LinkedIn]           :   https://www.linkedin.com/in/muhammedalii9/
 *
 * [Date]               :   2 February,2024
 *
 * [Description]        :   This document specifies the AUTOSAR platform types header file.
 *                              It contains all platform dependent types and symbols.
 *
 * [Release]            :  R22-11
 *
 */

#ifndef PLATFROM_TYPES_H
#define PLATFROM_TYPES_H

/**
 * [Description]    :   For each platform the register width of the CPU
 */

/* Indicating a 8 bit processor */
#define CPU_TYPE_8 (8U)
/* Indicating a 16 bit processor */
#define CPU_TYPE_16 (16U)
/* Indicating a 32 bit processor */
#define CPU_TYPE_32 (32U)
/* Indicating a 64 bit processor */
#define CPU_TYPE_64 (64U)

/**
 * [Description]    :   Defining CPU Type
 */
#define CPU_TYPE (CPU_TYPE_32)

/**
 * [Description]    :   For each platform the appropriate bit order on register level
 */

/* The most significant bit is the first bit of the bit sequence.*/
#define MSB_FIRST (0U)
/* The least significant bit is the first bit of the bit sequence*/
#define LSB_FIRST (0u)

/**
 * [Description]    :   For each platform the appropriate byte order on memory level
 */

/* Within uint16, the high byte is located before the low byte.*/
#define HIGH_BYTE_FIRST (0U)
/* Within uint16, the low byte is located before the high byte */
#define LOW_BYTE_FIRST (1U)

/**
 * [Description]    :   The standard AUTOSAR type boolean Values ()
 */

/* Defining FALSE */
#ifndef FALSE
#define FLASE (0U)
#endif
/* Defining TRUE */
#ifndef TRUE
#define TRUE (1U)
#endif

/**
 * [Description]    :   Defining n bit processor Types
 */
#if (CPU_TYPE == CPU_TYPE_8)

/**
 * [Name]           :   boolean
 * [Kind]           :   Type
 * [Range]          :   FALSE =   0U           TRUE =   1U
 * [Description]    :   This standard AUTOSAR type shall only be used together with the definitions TRUE and FALSE
 */
typedef unsigned char boolean;
/**
 * [Name]           :   uint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   255
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit unsigned
 */
typedef unsigned char uint8;
/**
 * [Name]           :   uint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   65535
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit unsigned
 */
typedef unsigned short uint16;
/**
 * [Name]           :   uint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   4294967295
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit unsigned
 */
typedef unsigned long uint32;
/**
 * [Name]           :   sint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   -128           MAX =   127
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit signed
 */
typedef signed char sint8;
/**
 * [Name]           :   sint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   -32768           MAX =   32767
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit signed
 */
typedef signed short sint16;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -2147483648           MAX =   2147483647
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit signed
 */
typedef signed long sint32;
/**
 * [Name]           :   float32
 * [Kind]           :   Type
 * [Range]          :   MIN =   1.17549435e-38           MAX =   3.40282347e+38
 * [Description]    :   This standard AUTOSAR type shall follow the 32-bit binary interchange format
 */
typedef float float32;

#endif

/**
 * [Description]    : Defining 16 bit processor Types
 */
#if (CPU_TYPE == CPU_TYPE_16)

/**
 * [Name]           :   boolean
 * [Kind]           :   Type
 * [Range]          :   FALSE =   0U           TRUE =   1U
 * [Description]    :   This standard AUTOSAR type shall only be used together with the definitions TRUE and FALSE
 */
typedef unsigned char boolean;
/**
 * [Name]           :   uint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   255
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit unsigned
 */
typedef unsigned char uint8;
/**
 * [Name]           :   uint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   65535
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit unsigned
 */
typedef unsigned short uint16;
/**
 * [Name]           :   uint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   4294967295
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit unsigned
 */
typedef unsigned long uint32;
/**
 * [Name]           :   uint64
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   18446744073709551615
 * [Description]    :   This standard AUTOSAR type shall be of 64 bit unsigned
 */
typedef unsigned long long uint64;
/**
 * [Name]           :   sint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   -128           MAX =   127
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit signed
 */
typedef signed char sint8;
/**
 * [Name]           :   sint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   -32768           MAX =   32767
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit signed
 */
typedef signed short sint16;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -2147483648           MAX =   2147483647
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit signed
 */
typedef signed long sint32;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -9223372036854775808           MAX =   9223372036854775807
 * [Description]    :   This standard AUTOSAR type shall be 64 bit signed.
 */
typedef signed long long sint64;
/**
 * [Name]           :   float32
 * [Kind]           :   Type
 * [Range]          :   MIN =   1.17549435e-38           MAX =   3.40282347e+38
 * [Description]    :   This standard AUTOSAR type shall follow the 32-bit binary interchange format
 */
typedef float float32;
/**
 * [Name]           :   float64
 * [Kind]           :   Type
 * [Range]          :   MIN =   2.2250738585072014e-308           MAX =  1.7976931348623157e+308
 * [Description]    :   This standard AUTOSAR type shall follow the 64-bit binary interchange format
 */
typedef double float64;
#endif


/**
 * [Description]    : Defining 32 bit processor Types
 */
#if (CPU_TYPE == CPU_TYPE_32)

/**
 * [Name]           :   boolean
 * [Kind]           :   Type
 * [Range]          :   FALSE =   0U           TRUE =   1U
 * [Description]    :   This standard AUTOSAR type shall only be used together with the definitions TRUE and FALSE
 */
typedef unsigned char boolean;
/**
 * [Name]           :   uint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   255
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit unsigned
 */
typedef unsigned char uint8;
/**
 * [Name]           :   uint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   65535
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit unsigned
 */
typedef unsigned short uint16;
/**
 * [Name]           :   uint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   4294967295
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit unsigned
 */
typedef unsigned long uint32;
/**
 * [Name]           :   uint64
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   18446744073709551615
 * [Description]    :   This standard AUTOSAR type shall be of 64 bit unsigned
 */
typedef unsigned long long uint64;
/**
 * [Name]           :   sint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   -128           MAX =   127
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit signed
 */
typedef signed char sint8;
/**
 * [Name]           :   sint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   -32768           MAX =   32767
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit signed
 */
typedef signed short sint16;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -2147483648           MAX =   2147483647
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit signed
 */
typedef signed long sint32;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -9223372036854775808           MAX =   9223372036854775807
 * [Description]    :   This standard AUTOSAR type shall be 64 bit signed.
 */
typedef signed long long sint64;
/**
 * [Name]           :   float32
 * [Kind]           :   Type
 * [Range]          :   MIN =   1.17549435e-38           MAX =   3.40282347e+38
 * [Description]    :   This standard AUTOSAR type shall follow the 32-bit binary interchange format
 */
typedef float float32;
/**
 * [Name]           :   float64
 * [Kind]           :   Type
 * [Range]          :   MIN =   2.2250738585072014e-308           MAX =  1.7976931348623157e+308
 * [Description]    :   This standard AUTOSAR type shall follow the 64-bit binary interchange format
 */
typedef double float64;
#endif


/**
 * [Description]    : Defining 64 bit processor Types
 */
#if (CPU_TYPE == CPU_TYPE_64)

/**
 * [Name]           :   boolean
 * [Kind]           :   Type
 * [Range]          :   FALSE =   0U           TRUE =   1U
 * [Description]    :   This standard AUTOSAR type shall only be used together with the definitions TRUE and FALSE
 */
typedef unsigned char boolean;
/**
 * [Name]           :   uint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   255
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit unsigned
 */
typedef unsigned char uint8;
/**
 * [Name]           :   uint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   65535
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit unsigned
 */
typedef unsigned short uint16;
/**
 * [Name]           :   uint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   4294967295
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit unsigned
 */
typedef unsigned int uint32;
/**
 * [Name]           :   uint64
 * [Kind]           :   Type
 * [Range]          :   MIN =   0           MAX =   18446744073709551615
 * [Description]    :   This standard AUTOSAR type shall be of 64 bit unsigned
 */
typedef unsigned long long uint64;
/**
 * [Name]           :   sint8
 * [Kind]           :   Type
 * [Range]          :   MIN =   -128           MAX =   127
 * [Description]    :   This standard AUTOSAR type shall be of 8 bit signed
 */
typedef signed char sint8;
/**
 * [Name]           :   sint16
 * [Kind]           :   Type
 * [Range]          :   MIN =   -32768           MAX =   32767
 * [Description]    :   This standard AUTOSAR type shall be of 16 bit signed
 */
typedef signed short sint16;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -2147483648           MAX =   2147483647
 * [Description]    :   This standard AUTOSAR type shall be of 32 bit signed
 */
typedef signed int sint32;
/**
 * [Name]           :   sint32
 * [Kind]           :   Type
 * [Range]          :   MIN =   -9223372036854775808           MAX =   9223372036854775807
 * [Description]    :   This standard AUTOSAR type shall be 64 bit signed.
 */
typedef signed long long sint64;
/**
 * [Name]           :   float32
 * [Kind]           :   Type
 * [Range]          :   MIN =   1.17549435e-38           MAX =   3.40282347e+38
 * [Description]    :   This standard AUTOSAR type shall follow the 32-bit binary interchange format
 */
typedef float float32;
/**
 * [Name]           :   float64
 * [Kind]           :   Type
 * [Range]          :   MIN =   2.2250738585072014e-308           MAX =  1.7976931348623157e+308
 * [Description]    :   This standard AUTOSAR type shall follow the 64-bit binary interchange format
 */
typedef double float64;
#endif

#endif /* PLATFROM_TYPES_H */