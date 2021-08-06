#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 512

/* kservice optimization */

#define RT_DEBUG
#define RT_DEBUG_COLOR

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_SMALL_MEM
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define RT_VER_NUM 0x40004
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M4

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */


/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10

/* Device virtual file system */


/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_SYSTEM_WORKQUEUE_STACKSIZE 2048
#define RT_SYSTEM_WORKQUEUE_PRIORITY 23
#define RT_USING_SERIAL
#define RT_USING_SERIAL_V1
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_CAN
#define RT_CAN_USING_HDR
#define RT_USING_HWTIMER
#define RT_USING_PIN
#define RT_USING_SPI

/* Using USB */


/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_LIBC_DEFAULT_TIMEZONE 8

/* Network */

/* Socket abstraction layer */

#define RT_USING_SAL
#define SAL_INTERNET_CHECK
#define SAL_SOCKETS_NUM 16

/* Network interface device */

#define RT_USING_NETDEV
#define NETDEV_USING_IFCONFIG
#define NETDEV_USING_PING
#define NETDEV_USING_NETSTAT
#define NETDEV_USING_AUTO_DEFAULT
#define NETDEV_IPV4 1
#define NETDEV_IPV6 0

/* light weight TCP/IP stack */


/* AT commands */


/* VBUS(Virtual Software BUS) */


/* Utilities */


/* RT-Thread online packages */

/* IoT - internet of things */


/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */

#define PKG_USING_WIZNET
#define WIZ_USING_W5500

/* WIZnet device configure */

#define WIZ_SPI_DEVICE "spi20"
#define WIZ_RST_PIN 3
#define WIZ_IRQ_PIN 28

/* WIZnet network configure */

#define WIZ_IPADDR "192.168.1.10"
#define WIZ_GWADDR "192.168.1.1"
#define WIZ_MSKADDR "255.255.255.0"
#define WIZ_USING_PING
#define PKG_USING_WIZNET_LATEST_VERSION

/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */

#define PKG_USING_SEGGER_RTT
#define SEGGER_RTT_ENABLE
#define PKG_USING_SEGGER_RTT_V110

/* system packages */

/* acceleration: Assembly language or algorithmic acceleration packages */


/* Micrium: Micrium software products porting for RT-Thread */


/* peripheral libraries and drivers */


/* AI packages */


/* miscellaneous packages */

#define PKG_USING_CANFESTIVAL
#define CANFESTIVAL_CAN_DEVICE_NAME "can1"
#define CANFESTIVAL_TIMER_DEVICE_NAME "timer11"
#define CANFESTIVAL_RECV_THREAD_PRIO 9
#define CANFESTIVAL_TIMER_THREAD_PRIO 10
#define CANFESTIVAL_USING_EG_MASTER402
#define PKG_USING_CANFESTIVAL_V100

/* samples: kernel and components samples */


/* entertainment: terminal games and other interesting software packages */

#define SOC_FAMILY_STM32
#define SOC_SERIES_STM32F4

/* Hardware Drivers Config */

#define SOC_STM32F407ZG

/* Onboard Peripheral Drivers */

/* On-chip Peripheral Drivers */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_UART1
#define BSP_USING_CAN
#define BSP_USING_CAN1
#define BSP_USING_TIM
#define BSP_USING_TIM11
#define BSP_USING_SPI
#define BSP_USING_SPI2
#define BSP_SPI2_TX_USING_DMA
#define BSP_SPI2_RX_USING_DMA

/* Board extended module Drivers */


#endif
