#include "stm32f10x.h" // 包含STM32F10x标准外设库头文件
#include "GPIO_int.h" // 包含GPIO初始化头文件
#include "Timer.h" // 包含定时器初始化头文件
#include "ADC_int.h" // 包含ADC初始化头文件
#include "Tim1_PWM.h" // 包含Tim1_PWM初始化头文件
#include "ThreeHall.h" // 包含ThreeHall初始化头文件
#include "IQ_math.h" // 包含IQ_math初始化头文件
#include "Tim4_Encoder_PWMDAC.h" // 包含Tim4_Encoder_PWMDAC初始化头文件
#include "PI_Cale.h" // 包含PI_Cale初始化头文件
#include "Task_function.h" // 包含Task_function初始化头文件
#include "Usart_RS232.h" // 包含Usart_RS232初始化头文件
#include "exti.h" // 包含exti初始化头文件
#include "stdio.h" // 包含标准输入输出头文件
#include <math.h> // 包含数学函数头文件
#include "sys.h" // 包含系统头文件
#include "delay.h" // 包含延时函数头文件
#include "usart.h" // 包含串口函数头文件
#include "led.h" // 包含LED函数头文件
#include "key.h" // 包含按键函数头文件

long numdec = 0; // 定义一个长整型变量numdec，初始值为0
float syst = 0.0; // 定义一个浮点型变量syst，初始值为0.0

int main(void)
{
   
    delay_init(); // 初始化延时函数
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 设置NVIC优先级分组为2
    uart_init(115200); // 初始化串口，波特率为115200
    LED_Init(); // 初始化LED
    KEY_Init(); // 初始化按键
    EXTIX_Init(); // 初始化EXTI

   

    while (1) // 无限循环
    {
        printf("OK\r\n"); // 打印"OK"
        delay_ms(1000); // 延时1秒
    }
}
