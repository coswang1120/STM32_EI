#include "stm32f10x.h" // ����STM32F10x��׼�����ͷ�ļ�
#include "GPIO_int.h" // ����GPIO��ʼ��ͷ�ļ�
#include "Timer.h" // ������ʱ����ʼ��ͷ�ļ�
#include "ADC_int.h" // ����ADC��ʼ��ͷ�ļ�
#include "Tim1_PWM.h" // ����Tim1_PWM��ʼ��ͷ�ļ�
#include "ThreeHall.h" // ����ThreeHall��ʼ��ͷ�ļ�
#include "IQ_math.h" // ����IQ_math��ʼ��ͷ�ļ�
#include "Tim4_Encoder_PWMDAC.h" // ����Tim4_Encoder_PWMDAC��ʼ��ͷ�ļ�
#include "PI_Cale.h" // ����PI_Cale��ʼ��ͷ�ļ�
#include "Task_function.h" // ����Task_function��ʼ��ͷ�ļ�
#include "Usart_RS232.h" // ����Usart_RS232��ʼ��ͷ�ļ�
#include "exti.h" // ����exti��ʼ��ͷ�ļ�
#include "stdio.h" // ������׼�������ͷ�ļ�
#include <math.h> // ������ѧ����ͷ�ļ�
#include "sys.h" // ����ϵͳͷ�ļ�
#include "delay.h" // ������ʱ����ͷ�ļ�
#include "usart.h" // �������ں���ͷ�ļ�
#include "led.h" // ����LED����ͷ�ļ�
#include "key.h" // ������������ͷ�ļ�

long numdec = 0; // ����һ�������ͱ���numdec����ʼֵΪ0
float syst = 0.0; // ����һ�������ͱ���syst����ʼֵΪ0.0

int main(void)
{
   
    delay_init(); // ��ʼ����ʱ����
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // ����NVIC���ȼ�����Ϊ2
    uart_init(115200); // ��ʼ�����ڣ�������Ϊ115200
    LED_Init(); // ��ʼ��LED
    KEY_Init(); // ��ʼ������
    EXTIX_Init(); // ��ʼ��EXTI

   

    while (1) // ����ѭ��
    {
        printf("OK\r\n"); // ��ӡ"OK"
        delay_ms(1000); // ��ʱ1��
    }
}
