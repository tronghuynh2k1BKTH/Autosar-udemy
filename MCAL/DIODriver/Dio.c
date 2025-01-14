//  MCAL for DIO driver
#include "Dio.h"

// Function API to read a channel
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    unsigned int ReadVal;

    // Assume Channel 10 is mapped to port P2.0
    if(ChannelId == 10)
    {
        ReadVal = P2IN & BIT0;
        /*
        P2IN là thanh ghi đầu vào (Input Register) của Port 2 trên vi điều khiển.
        Thanh ghi này lưu trạng thái mức logic của các chân GPIO thuộc Port 2.
        Nếu một chân của Port 2 được cấu hình là input, vi điều khiển có thể đọc trạng thái của nó từ P2IN.
        P2IN thường được định nghĩa trong file register definitions của MCU, ví dụ:
            #define P2IN (*(volatile unsigned int *)0x0028) // Địa chỉ thanh ghi P2IN

        BIT0 là một hằng số đại diện cho bit thứ 0 (bit thấp nhất) của một thanh ghi.
        Nó thường được định nghĩa trong file bit definitions của MCU như sau:
            #define BIT0 (1 << 0) // 0x01 = 0b00000001
        Khi dùng BIT0, ta đang truy cập bit đầu tiên của thanh ghi P2IN (tức là chân P2.0).

        P2IN   = 0b10101001
        BIT0   = 0b00000001
        -------------------
        Result = 0b00000001 (P2.0 = 1)

        Tại sao cần phải nhân để đọc được chân P2IN mà không đọc trực tiếp?
            P2IN chứa trạng thái của tất cả các chân của Port 2
            P2IN không chỉ lưu trạng thái của một chân, mà chứa trạng thái của tất cả các chân từ P2.0 đến P2.7
            Nếu ta đọc trực tiếp P2IN, ta sẽ nhận được một số 8 bit, chứ không phải trạng thái của một chân cụ thể
        */
        
        if(ReadVal == 0x00)
            return (STD_LOW)
        else
            return (STD_HIGH);
    }
    // continues for the other channel
}

// Function API to write a port
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    if(Channel == 10)
    {
        if(Level == STD_LOW)
            P2OUT $= ~BIT0; /* set pin LOW */
        else
            P2OUT |= BIT0; /* set pin HIGH */
    }
}
