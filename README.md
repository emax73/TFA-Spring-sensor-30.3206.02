TFA Spring weather station 433 MHz Temperature/Humidity sensor 30.3206.02
protocol handling for STM32F4 microcontroller

As receiver was using 433.92 MHz ASK Receiver module from Canton Electronics
(-112dBm, 9600 bod)

Using library:

Pin from 433 MHz receiver appointed near begin of file "tfa.c":
static pin_t tfaPin = {GPIOC, GPIO_PIN_3};
#define TFA_PIN_CLOCK_ENABLE() __GPIOC_CLK_ENABLE()

tfaInit() - must called from initialisation code
tfaTask() - must called from timer interrupt every 50 uSec

Other interface variables documented inside header file "tfa.h"


