# 代码仓说明

## 项目概述
本项目是一个基于STM32F103C8微控制器的嵌入式系统项目，主要功能包括GPIO初始化、定时器初始化、ADC初始化、Tim1_PWM初始化、ThreeHall初始化、IQ_math初始化、Tim4_Encoder_PWMDAC初始化、PI_Cale初始化、Task_function初始化、Usart_RS232初始化、exti初始化、延时函数初始化、串口函数初始化、LED函数初始化和按键函数初始化。

## 文件结构
- `main.c`：主程序文件，包含系统初始化和主循环。
- `stm32f10x_it.c`：中断服务程序文件。
- `.vscode/settings.json`：VSCode配置文件，包含编译器和调试器的设置。
- `JLinkLog.txt`：J-Link调试日志文件。

## 代码说明
- `main.c`文件中，首先初始化延时函数、NVIC优先级分组、串口、LED、按键和EXTI。然后进入无限循环，打印"OK"并延时1秒。

## 使用说明
1. 确保已安装STM32F103C8微控制器和相关的开发环境。
2. 将代码文件放置在正确的目录下。
3. 打开VSCode，配置编译器和调试器。
4. 编译并下载代码到微控制器。
5. 使用J-Link调试器连接微控制器，查看调试日志。

## 注意事项
- 请确保在编译和下载代码之前，已经正确配置了编译器和调试器。
- 本项目仅作为示例，实际使用时可能需要根据具体需求进行修改。

## 联系方式
如有任何问题或建议，请通过以下方式联系我们：
- 邮箱：example@example.com
- 电话：123-456-7890

## 版权声明
本项目的所有代码和文档均受版权保护，未经许可，不得用于商业用途。

# 外部中斷程式整理

## 修改日期: [當前日期]

### 主要變更:

1. 整理了 `exti.c` 文件的結構,提高了可讀性。
2. 移除了未使用的註釋代碼。
3. 簡化了 `EXTIX_Init` 函數,只保留了 KEY0 (GPIOA.1) 和 KEY1 (GPIOA.4) 的中斷配置。
4. 統一了中斷觸發方式為下降沿觸發。
5. 保留了 `EXTI1_IRQHandler` 和 `EXTI4_IRQHandler` 兩個中斷處理函數。
6. 移除了與 LED 相關的操作,改為通過 UART 輸出按鍵狀態。

### 待優化項目:

1. 考慮使用結構體數組來簡化按鍵初始化過程。
2. 可以添加防抖動的宏定義,以便於調整消抖時間。
3. 考慮添加按鍵釋放的檢測,以實現更複雜的按鍵功能。

### 注意事項:

- 確保 `key.h` 中正確定義了 `KEY0` 和 `KEY1` 的引腳。
- 確保 UART 已正確初始化,否則 `printf` 函數可能無法正常工作。
