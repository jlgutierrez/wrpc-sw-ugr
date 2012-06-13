#ifndef __BOARD_H
#define __BOARD_H

#define BASE_MINIC    0x20000
#define BASE_EP   	  0x20100 
#define BASE_SOFTPLL  0x20200 
#define BASE_PPS_GEN  0x20300
#define BASE_SYSCON   0x20400
#define BASE_UART 	  0x20500
#define BASE_ONEWIRE  0x20600

#define FMC_EEPROM_ADR 0x50

#define CPU_CLOCK 62500000ULL

#define REF_CLOCK_PERIOD_PS 8000
#define REF_CLOCK_FREQ_HZ 125000000

#define UART_BAUDRATE 115200ULL /* not a real UART */

#define NET_MAX_SOCKETS 3
#define NET_SKBUF_SIZE 256

static inline void delay(int x)
{
  while(x--) asm volatile("nop");
}
  
#endif
