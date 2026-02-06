#ifndef __IMX6ULL_GPIO_H
#define __IMX6ULL_GPIO_H

#include "rename.h"
#define IOMUX_SW_MUX_CTL_PAD_GPIO1_IO03 0x020e0068
#define IOMUX_SW_PAD_CTL_PAD_GPIO1_IO03 0x020e02f4
#define IOMUX_SW_MUX_CTL_PAD_SNVS_TAMPER1 0X0229000C
#define IOMUX_SW_PAD_CTL_PAD_SNVS_TAMPER1 0X02290050

#define GPIO1_DR       0x0209c000
#define GPIO1_GDIR     0x0209c004
#define GPIO1_PSR      0x0209c008
#define GPIO1_ICR1     0x0209c00c
#define GPIO1_ICR2     0x0209c010
#define GPIO1_IMR      0x0209c014
#define GPIO1_ISR      0x0209c018
#define GPIO1_edge_sel 0x0209c01c
#define GPIO2_DR       0x020a0000
#define GPIO2_GDIR     0x020a0004
#define GPIO2_PSR      0x020a0008
#define GPIO2_ICR1     0x020a000c
#define GPIO2_ICR2     0x020a0010
#define GPIO2_IMR      0x020a0014
#define GPIO2_ISR      0x020a0018
#define GPIO2_edge_sel 0x020a001c
#define GPIO5_DR       0x020ac000
#define GPIO5_GDIR     0x020ac004
#define GPIO5_PSR      0x020ac008
#define GPIO5_ICR1     0x020ac00c
#define GPIO5_ICR2     0x020ac010
#define GPIO5_IMR      0x020ac014
#define GPIO5_ISR      0x020ac018
#define GPIO5_edge_sel 0x020ac01c


void gpioset(
    uint32_t iomux_mux_gpion,uint32_t value1,
    uint32_t iomux_pad_gpion,uint32_t value2,
    uint32_t gpio_dr,        uint32_t value3,
    uint32_t gpio_gdir,      uint32_t value4,
    uint32_t gpio_psr,       uint32_t value5,
    uint32_t gpio_icr1,      uint32_t value6,
    uint32_t gpio_icr2,      uint32_t value7,
    uint32_t gpio_imr,       uint32_t value8,
    uint32_t gpio_isr,       uint32_t value9,
    uint32_t gpio_edge_sel,  uint32_t value10);

void gpio_output_set(uint32_t gpio_dr,      uint32_t value);
        

#endif