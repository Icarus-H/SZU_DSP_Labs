/****************    *****************/
#include "DSP281x_Device.h"     // DSP281x Headerfile Include File
#include "DSP281x_Examples.h"   // DSP281x Examples Include File
#include <stdio.h>
/****************�˿ں궨��*****************/
#define S1 GpioDataRegs.GPBDAT.bit.GPIOB5


/****************��������*******************/
void demo1(void);
static void Gpio_select1(void); //gpio�˿������ӳ���
static void delay_c1(int);
static void Scan_Key(void);
static void LED_Stop(void);
