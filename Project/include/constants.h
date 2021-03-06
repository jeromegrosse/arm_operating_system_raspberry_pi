#ifndef _CONSTANTS_H
#define _CONSTANTS_H

// BASE_ADDRESSES
#define BCM2708_PERIPHERIRAL_BASE  0x20000000

#define SYSTIMER_BASE              (BCM2708_PERIPHERIRAL_BASE + 0x3000)
#define UART0_BASE                 (BCM2708_PERIPHERIRAL_BASE + 0x201000)

#define ARM_BASE                   (BCM2708_PERIPHERIRAL_BASE + 0xB400)

#define F_CPU                      700000000


//GPIO
#define PIN_ON  1
#define PIN_OFF 2
#define PIN_AUDIOLEFT 45
#define PIN_AUDIORIGHT 40

#define KERNEL_MEMORY_LOWER_BOUND 0X8000
#define KERNEL_MEMORY_LENGTH      0x1000000
#define KERNEL_MEMORY_UPPER_BOUND KERNEL_MEMORY_LOWER_BOUND + KERNEL_MEMORY_LENGTH

#define HEAP_MAX_SIZE             1640000
#define HEAP_START_ADDRESS        KERNEL_MEMORY_UPPER_BOUND - HEAP_MAX_SIZE


//Power management
#define ARM_PM_BASE               (BCM2708_PERIPHERIRAL_BASE + 0x100000)
#define ARM_PM_RSTC               (ARM_PM_BASE + 0x1C)
#define ARM_PM_WATCHDOG           (ARM_PM_BASE + 0x24)
#define ARM_PM_PASSWD             (0x5A << 24) //0x51000000
#define ARM_PM_RSTC_WRCFG_FULL_RESET 0x20;

#ifndef NULL
#define NULL 0
#endif

#endif
