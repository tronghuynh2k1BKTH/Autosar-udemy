
#include "Adc.h"

//  Function to start ADC conversion
void Adc_StartGroupConversion(Adc_GroupType Group)
{
    if(Group == 1)
    {
        // write our code to start the ADC, init?
    }
}

//  Function API to read ADC group
/*
DataBufferPtr: Adc_ValueGroupType* Con trỏ trỏ đến bộ nhớ để lưu giá trị ADC đọc được
*/
Std_ReturnType Adc_ReadGroup
        (   Adc_GroupType Group,
            Adc_ValueGroupType* DataBufferPtr)
{
    unsigned int ADCValue;
    if(Group == 1)
    {
        ADCValue = SomeRegister;
        *DataBufferPtr = ADCValue;
        /* 
        Write back ADC
        Giả sử SomeRegister là thanh ghi chứa giá trị ADC đã chuyển đổi.
        CPU đọc giá trị ADC từ phần cứng và lưu vào biến ADCValue.
        Gán giá trị ADC vào con trỏ DataBufferPtr, tức là lưu giá trị ADC vào bộ nhớ được chỉ định.
        Điều này giúp trả kết quả ADC về cho phần mềm ứng dụng (Application Layer) sử dụng.
        */
    }
}
