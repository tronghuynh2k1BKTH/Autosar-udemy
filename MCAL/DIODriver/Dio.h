typedef unsigned int Dio_LevelType;

#define STD_LOW 0x00 /* Physical State 0V */
#define STD_HIGH 0x01 /* Physical State 5V or 3.3V */

typedef unsigned int Dio_ChannelType

//  type unit
//  This is implementation specific but not all values may be valid within the type.
//  Shall cover all available DIO channels


#define P2IN (*(volatile unsigned int *)0x0028) // Địa chỉ thanh ghi P2IN
#define BIT0 (1 << 0) // 0x01 = 0b00000001