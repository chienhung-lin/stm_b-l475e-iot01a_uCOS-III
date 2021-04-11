/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include "cortexm/exception-handlers.h"

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

// Forward declaration of the specific IRQ handlers. These are aliased
// to the Default_Handler, which is a 'forever' loop. When the application
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions

void __attribute__ ((weak, alias ("Default_Handler")))
WWDG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PVD_PVM_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TAMP_STAMP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RTC_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RCC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_TX_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_SCE_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI9_5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_BRK_TIM15_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_UP_TIM16_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_TRG_COM_TIM17_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_CC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI15_10_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RTC_Alarm_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_BRK_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_UP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_TRG_COM_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_CC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FMC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SDMMC1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM6_DAC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
COMP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPUART1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
QUADSPI_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SWPMI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TSC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RNG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);

// ----------------------------------------------------------------------------

extern unsigned int _estack;

typedef void
(* const pHandler)(void);

// ----------------------------------------------------------------------------

// The vector table.
// This relies on the linker script to place at correct location in memory.

__attribute__ ((section(".isr_vector"),used))
pHandler __isr_vectors[] =
  {
    // Cortex-M Core Handlers
    (pHandler) &_estack,               // The initial stack pointer
    Reset_Handler,                     // The reset handler

    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The bus fault handler
    UsageFault_Handler,                // The usage fault handler
#else
    0,				           	       // Reserved
	0,				           	       // Reserved
	0,				           	       // Reserved
#endif
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    DebugMon_Handler,                  // Debug monitor handler
#else
    0,					               // Reserved
#endif
    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // ----------------------------------------------------------------------
    // External Interrupts
    WWDG_IRQHandler,                   // Window WatchDog
    PVD_PVM_IRQHandler,                // PVD and PVM through EXTI Line detection
    TAMP_STAMP_IRQHandler,             // Tamper and TimeStamps through the EXTI line
    RTC_WKUP_IRQHandler,               // RTC Wakeup through the EXTI line
    FLASH_IRQHandler,                  // FLASH
    RCC_IRQHandler,                    // RCC
    EXTI0_IRQHandler,                  // EXIT Line0
    EXTI1_IRQHandler,                  // EXIT Line1
    EXTI2_IRQHandler,                  // EXIT Line2
    EXTI3_IRQHandler,                  // EXIT Line3
    EXTI4_IRQHandler,                  // EXIT Line4
    DMA1_Channel1_IRQHandler,          // DMA1 Channel1
    DMA1_Channel2_IRQHandler,          // DMA1 Channel2
    DMA1_Channel3_IRQHandler,          // DMA1 Channel3
    DMA1_Channel4_IRQHandler,          // DMA1 Channel4
    DMA1_Channel5_IRQHandler,          // DMA1 Channel5
    DMA1_Channel6_IRQHandler,          // DMA1 Channel6
    DMA1_Channel7_IRQHandler,          // DMA1 Channel7
    ADC1_2_IRQHandler,                 // ADC1 and ADC2
    CAN1_TX_IRQHandler,                // CAN1 TX
    CAN1_RX0_IRQHandler,               // CAN1 RX0
    CAN1_RX1_IRQHandler,               // CAN1 RX1
    CAN1_SCE_IRQHandler,               // CAN1 SCE
    EXTI9_5_IRQHandler,                // EXTI Line[9:5]s
    TIM1_BRK_TIM15_IRQHandler,         // TIM1 Break/TIM15
    TIM1_UP_TIM16_IRQHandler,          // TIM1 Update/TIM16
    TIM1_TRG_COM_TIM17_IRQHandler,     // TIM1 trigger and commutation/TIM17
    TIM1_CC_IRQHandler,                // TIM1 capture compare
    TIM2_IRQHandler,                   // TIM2
    TIM3_IRQHandler,                   // TIM3
    TIM4_IRQHandler,                   // TIM4
    I2C1_EV_IRQHandler,                // I2C1 event
    I2C1_ER_IRQHandler,                // I2C1 error
    I2C2_EV_IRQHandler,                // I2C2 event
    I2C2_ER_IRQHandler,                // I2C2 error
    SPI1_IRQHandler,                   // SPI1
    SPI2_IRQHandler,                   // SPI2
    USART1_IRQHandler,                 // USART1
    USART2_IRQHandler,                 // USART2
    USART3_IRQHandler,                 // USART3
    EXTI15_10_IRQHandler,              // EXTI Line[15:10]s
    RTC_Alarm_IRQHandler,              // RTC alarms through EXTI Line18
    DFSDM1_FLT3_IRQHandler,            // DFSDM1_FLT3
    TIM8_BRK_IRQHandler,               // TIM8 Break
    TIM8_UP_IRQHandler,                // TIM8 Update
    TIM8_TRG_COM_IRQHandler,           // TIM8 trigger and commutation
    TIM8_CC_IRQHandler,                // TIM8 capture compare
    ADC3_IRQHandler,                   // ADC3
    FMC_IRQHandler,                    // FMC
    SDMMC1_IRQHandler,                 // SDMMC1
    TIM5_IRQHandler,                   // TIM5
    SPI3_IRQHandler,                   // SPI3
    UART4_IRQHandler,                  // UART4
    UART5_IRQHandler,                  // UART5
    TIM6_DAC_IRQHandler,               // TIM6 and DAC1 underrun
    TIM7_IRQHandler,                   // TIM7
    DMA2_Channel1_IRQHandler,          // DMA2 Channel1
    DMA2_Channel2_IRQHandler,          // DMA2 Channel2
    DMA2_Channel3_IRQHandler,          // DMA2 Channel3
    DMA2_Channel4_IRQHandler,          // DMA2 Channel4
    DMA2_Channel5_IRQHandler,          // DMA2 Channel5
    DFSDM1_FLT0_IRQHandler,            // DFSDM1_FLT0
    DFSDM1_FLT1_IRQHandler,            // DFSDM1_FLT1
    DFSDM1_FLT2_IRQHandler,            // DFSDM1_FLT2
    COMP_IRQHandler,                   // COMP1/COMP2 through EXTI Line21/22
    LPTIM1_IRQHandler,                 // LPTIM1
    LPTIM2_IRQHandler,                 // LPTIM2
    OTG_FS_IRQHandler,                 // OTG_FS
    DMA2_Channel6_IRQHandler,          // DMA2 Channel6
    DMA2_Channel7_IRQHandler,          // DMA2 Channel7
    LPUART1_IRQHandler,                // LPUART1
    QUADSPI_IRQHandler,                // QUADSPI
    I2C3_EV_IRQHandler,                // I2C3 event
    I2C3_ER_IRQHandler,                // I2C3 error
    SAI1_IRQHandler,                   // SAI1
    SAI2_IRQHandler,                   // SAI2
    SWPMI1_IRQHandler,                 // SWPMI1
    TSC_IRQHandler,                    // TSC
    0,                                 // Reserved
    0,                                 // Reserved
    RNG_IRQHandler,                    // RNG
    FPU_IRQHandler,                    // Floating point
};

// ----------------------------------------------------------------------------

// Processor ends up here if an unexpected interrupt occurs or a
// specific handler is not present in the application code.
// When in DEBUG, trigger a debug exception to clearly notify
// the user of the exception and help identify the cause.

void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
#if defined(DEBUG)
__DEBUG_BKPT();
#endif
while (1)
  {
    ;
  }
}

// ----------------------------------------------------------------------------
