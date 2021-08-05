/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

/* defined the LED0 pin: PB1 */
//#define LED0_PIN    GET_PIN(B, 1)
#define W55_RST				GET_PIN(A, 3)
#define W55_INT				GET_PIN(B, 12)

int main(void)
{
    int count = 1;
    /* set LED0 pin mode to output */
//    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
		rt_kprintf("W55_RST = %d\n", W55_RST);
		rt_kprintf("W55_INT = %d\n", W55_INT);

    while (count++)
    {
//        rt_pin_write(LED0_PIN, PIN_HIGH);
//        rt_thread_mdelay(500);
//        rt_pin_write(LED0_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }

    return RT_EOK;
}
