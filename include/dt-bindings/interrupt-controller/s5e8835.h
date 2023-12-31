/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
 *
 * Author: Hajun Sung <hajun.sung@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for S5E8835 interrupt controller.
*/

#ifndef _DT_BINDINGS_INTERRUPT_CONTROLLER_EXYNOS_S5E8835_H
#define _DT_BINDINGS_INTERRUPT_CONTROLLER_EXYNOS_S5E8835_H

#include <dt-bindings/interrupt-controller/arm-gic.h>

#define INTREQ__ALIVE_EINT0                         0
#define INTREQ__ALIVE_EINT1                         1
#define INTREQ__ALIVE_EINT2                         2
#define INTREQ__ALIVE_EINT3                         3
#define INTREQ__ALIVE_EINT4                         4
#define INTREQ__ALIVE_EINT5                         5
#define INTREQ__ALIVE_EINT6                         6
#define INTREQ__ALIVE_EINT7                         7
#define INTREQ__ALIVE_EINT8                         8
#define INTREQ__ALIVE_EINT9                         9
#define INTREQ__ALIVE_EINT10                        10
#define INTREQ__ALIVE_EINT11                        11
#define INTREQ__ALIVE_EXT_INTC0                     12
#define INTREQ__ALIVE_EXT_INTC1                     13
#define INTREQ__ALIVE_EXT_INTC2                     14
#define INTREQ__ALIVE_EXT_INTC3                     15
#define INTREQ__ALIVE_EXT_INTC4                     16
#define INTREQ__ALIVE_EXT_INTC5                     17
#define INTREQ__ALIVE_EXT_INTC6                     18
#define INTREQ__ALIVE_EXT_INTC7                     19
#define INTREQ__ALIVE_GNSS_ACTIVE                   20
#define INTREQ__ALIVE_WLBT_ACTIVE                   21
#define INTREQ__CLKMON_MONCLK                       22
#define INTREQ__CLKMON_REFSTUCK                     23
#define INTREQ__COMB_NONSECURE_INTCOMB_VGPIO2AP     24
#define INTREQ__COMB_SFI_CE_NONSECURE_SYSREG_APM    25
#define INTREQ__COMB_SFI_UCE_NONSECURE_SYSREG_APM   26
#define INTREQ__DBGCORE_UART                        27
#define INTREQ__I2C_ALIVE0                          28
#define INTREQ__MAILBOX_APM2AP                      29
#define INTREQ__MAILBOX_CHUB2AP                     30
#define INTREQ__MAILBOX_CP2AP_0                     31
#define INTREQ__MAILBOX_CP2AP_1                     32
#define INTREQ__MAILBOX_CP2AP_2                     33
#define INTREQ__MAILBOX_CP2AP_3                     34
#define INTREQ__MAILBOX_CP2AP_4                     35
#define INTREQ__MAILBOX_DBGCORE2AP                  36
#define INTREQ__MAILBOX_GNSS2AP                     37
#define INTREQ__MAILBOX_WLAN2AP                     38
#define INTREQ__MAILBOX_WLBT_PMU2AP                 39
#define INTREQ__MAILBOX_WPAN2AP                     40
#define INTREQ__MCT_ALIVE_IRQ_0                     41
#define INTREQ__MCT_ALIVE_IRQ_1                     42
#define INTREQ__MCT_ALIVE_IRQ_2                     43
#define INTREQ__MCT_ALIVE_IRQ_3                     44
#define INTREQ__MCT_ALIVE_IRQ_4                     45
#define INTREQ__MCT_ALIVE_IRQ_5                     46
#define INTREQ__MCT_ALIVE_IRQ_6                     47
#define INTREQ__MCT_ALIVE_IRQ_7                     48
#define INTREQ__MCT_ALIVE_IRQ_8                     49
#define INTREQ__MCT_ALIVE_S_IRQ_0                   50
#define INTREQ__MCT_ALIVE_S_IRQ_1                   51
#define INTREQ__MCT_ALIVE_S_IRQ_2                   52
#define INTREQ__MCT_ALIVE_S_IRQ_3                   53
#define INTREQ__NOTIFY                              54
#define INTREQ__RTC_0_ALARM_INT                     55
#define INTREQ__RTC_0_TIC_INT_0                     56
#define INTREQ__RTC_S_ALARM_INT                     57
#define INTREQ__RTC_S_TIC_INT_0                     58
#define INTREQ__S_MAILBOX_CP2AP                     59
#define INTREQ__SPMI_MASTER_PMIC_0                  60
#define INTREQ__SPMI_MASTER_PMIC_1                  61
#define INTREQ__USI_ALIVE0                          62
#define INTREQ__AUD_ABOX_GIC400_MCPU                63
#define INTREQ__AUD_WDT                             64
#define INTREQ__SYSMMU_ABOX_S1_NS                   65
#define INTREQ__SYSMMU_ABOX_S1_S                    66
#define INTREQ__SYSMMU_ABOX_S2_NS                   67
#define INTREQ__SYSMMU_ABOX_S2_S                    68
#define INTREQ__EXT_INTE0                           69
#define INTREQ__EXT_INTE1                           70
#define INTREQ__EXT_INTH0_0                         71
#define INTREQ__EXT_INTH0_1                         72
#define INTREQ__EXT_INTH0_2                         73
#define INTREQ__EXT_INTH0_3                         74
#define INTREQ__EXT_INTH0_4                         75
#define INTREQ__EXT_INTH0_5                         76
#define INTREQ__EXT_INTH0_6                         77
#define INTREQ__EXT_INTH0_7                         78
#define INTREQ__EXT_INTH1_0                         79
#define INTREQ__EXT_INTH1_1                         80
#define INTREQ__EXT_INTH1_2                         81
#define INTREQ__EXT_INTH1_3                         82
#define INTREQ__I2C_CHUB1                           83
#define INTREQ__I2C_CHUB3                           84
#define INTREQ__I3C_CHUB                            85
#define INTREQ__MAILBOX_AP_VTS                      86
#define INTREQ__TIMER_CHUB                          87
#define INTREQ__USI_CHUB0                           88
#define INTREQ__USI_CHUB1                           89
#define INTREQ__USI_CHUB2                           90
#define INTREQ__USI_CHUB3                           91
#define INTREQ__WDT_CHUB                            92
#define INTREQ__WDT_VTS                             93
#define INTRQ_PWM_CHUB_0                            94
#define INTRQ_PWM_CHUB_1                            95
#define INTRQ_PWM_CHUB_2                            96
#define INTRQ_PWM_CHUB_3                            97
#define EXT_INTC8_OUT                               98
#define EXT_INTC9_OUT                               99
#define EXT_INTC10_OUT                              100
#define EXT_INTC11_OUT                              101
#define EXT_INTC12_OUT                              102
#define EXT_INTC13_OUT                              103
#define EXT_INTC14_OUT                              104
#define INTREQ__EXT_INTM03                          105
#define INTREQ__EXT_INTM06                          106
#define INTREQ__EXT_INTM07                          107
#define INTREQ__EXT_INTM10                          108
#define INTREQ__CPUCL0_CTIIRQ_0                     109
#define INTREQ__CPUCL0_CTIIRQ_1                     110
#define INTREQ__CPUCL0_CTIIRQ_2                     111
#define INTREQ__CPUCL0_CTIIRQ_3                     112
#define INTREQ__CPUCL0_CTIIRQ_4                     113
#define INTREQ__CPUCL0_CTIIRQ_5                     114
#define INTREQ__CPUCL0_CTIIRQ_6                     115
#define INTREQ__CPUCL0_CTIIRQ_7                     116
#define INTREQ__CPUCL0_PMBIRQ_4                     117
#define INTREQ__CPUCL0_PMBIRQ_5                     118
#define INTREQ__CPUCL0_PMBIRQ_6                     119
#define INTREQ__CPUCL0_PMBIRQ_7                     120
#define INTREQ__EXT_INTM11                          121
#define INTREQ__EXT_INTM12                          122
#define INTREQ__EXT_INTM15                          123
#define INTREQ__EXT_INTM16                          124
#define INTREQ__EXT_INTM20                          125
#define INTREQ__EXT_INTM23                          126
#define INTREQ__EXT_INTM24                          127
#define INTREQ__EXT_INTM27                          128
#define INTREQ__EXT_INTM28                          129
#define INTREQ__GPIO_EXT_INTM00_OR_USI_CMGP0_INT    130
#define INTREQ__GPIO_EXT_INTM01_OR_I2C_CMGP0_INT    131
#define INTREQ__GPIO_EXT_INTM02_OR_I3C_CMGP0_O_INT  132
#define INTREQ__GPIO_EXT_INTM04_OR_USI_CMGP1_INT    133
#define INTREQ__GPIO_EXT_INTM05_OR_I2C_CMGP1_INT    134
#define INTREQ__GPIO_EXT_INTM08_OR_USI_CMGP2_INT    135
#define INTREQ__GPIO_EXT_INTM09_OR_I2C_CMGP2_INT    136
#define INTREQ__GPIO_EXT_INTM13_OR_USI_CMGP3_INT    137
#define INTREQ__GPIO_EXT_INTM14_OR_I2C_CMGP3_INT    138
#define INTREQ__GPIO_EXT_INTM17_OR_USI_CMGP4_INT    139
#define INTREQ__GPIO_EXT_INTM18_OR_I2C_CMGP4_INT    140
#define INTREQ__GPIO_EXT_INTM19_OR_I3C_CMGP1_O_INT  141
#define INTREQ__GPIO_EXT_INTM21_OR_USI_CMGP5_INT    142
#define INTREQ__GPIO_EXT_INTM22_OR_I2C_CMGP5_INT    143
#define INTREQ__GPIO_EXT_INTM25_OR_USI_CMGP6_INT    144
#define INTREQ__GPIO_EXT_INTM26_OR_I2C_CMGP6_INT    145
#define INTREQ__CPUCL0_CLUSTERPMUIRQ                146
#define INTREQ__CPUCL0_COMMIRQ_0                    147
#define INTREQ__CPUCL0_COMMIRQ_1                    148
#define INTREQ__CPUCL0_COMMIRQ_2                    149
#define INTREQ__CPUCL0_COMMIRQ_3                    150
#define INTREQ__CPUCL0_COMMIRQ_4                    151
#define INTREQ__CPUCL0_COMMIRQ_5                    152
#define INTREQ__CPUCL0_COMMIRQ_6                    153
#define INTREQ__CPUCL0_COMMIRQ_7                    154
#define INTREQ__CPUCL0_CPM_DDC_INT_CAL              155
#define INTREQ__CPUCL0_ERRIRQ_0                     156
#define INTREQ__CPUCL0_ERRIRQ_1                     157
#define INTREQ__CPUCL0_ERRIRQ_2                     158
#define INTREQ__CPUCL0_ERRIRQ_3                     159
#define INTREQ__CPUCL0_ERRIRQ_4                     160
#define INTREQ__CPUCL0_ERRIRQ_5                     161
#define INTREQ__CPUCL0_ERRIRQ_6                     162
#define INTREQ__CPUCL0_ERRIRQ_7                     163
#define INTREQ__CPUCL0_ERRIRQ_8                     164
#define INTREQ__CPUCL0_FAULTIRQ_0                   165
#define INTREQ__CPUCL0_FAULTIRQ_1                   166
#define INTREQ__CPUCL0_FAULTIRQ_2                   167
#define INTREQ__CPUCL0_FAULTIRQ_3                   168
#define INTREQ__CPUCL0_FAULTIRQ_4                   169
#define INTREQ__CPUCL0_FAULTIRQ_5                   170
#define INTREQ__CPUCL0_FAULTIRQ_6                   171
#define INTREQ__CPUCL0_FAULTIRQ_7                   172
#define INTREQ__CPUCL0_FAULTIRQ_8                   173
#define INTREQ__CPUCL0_PMUIRQ_0                     174
#define INTREQ__CPUCL0_PMUIRQ_1                     175
#define INTREQ__CPUCL0_PMUIRQ_2                     176
#define INTREQ__CPUCL0_PMUIRQ_3                     177
#define INTREQ__CPUCL0_PMUIRQ_4                     178
#define INTREQ__CPUCL0_PMUIRQ_5                     179
#define INTREQ__CPUCL0_PMUIRQ_6                     180
#define INTREQ__CPUCL0_PMUIRQ_7                     181
#define INTREQ__OCP_REATOR_CPUCL0_0                 182
#define INTREQ__OCP_REATOR_CPUCL0_1                 183
#define INTREQ__OCP_REATOR_DSU                      184
#define INTREQ__PPC_INSTRRET_LOWER_CPUCL0_0         185
#define INTREQ__PPC_INSTRRET_LOWER_CPUCL0_1         186
#define INTREQ__PPC_INSTRRET_UPPER_CPUCL0_0         187
#define INTREQ__PPC_INSTRRET_UPPER_CPUCL0_1         188
#define INTREQ__PPC_INSTRRUN_LOWER_CPUCL0_0         189
#define INTREQ__PPC_INSTRRUN_LOWER_CPUCL0_1         190
#define INTREQ__PPC_INSTRRUN_UPPER_CPUCL0_0         191
#define INTREQ__PPC_INSTRRUN_UPPER_CPUCL0_1         192
#define INTREQ__CSIS0                               193
#define INTREQ__CSIS1                               194
#define INTREQ__CSIS2                               195
#define INTREQ__CSIS3                               196
#define INTREQ__CSIS4                               197
#define INTREQ__CSIS_DMA0                           198
#define INTREQ__CSIS_DMA1                           199
#define INTREQ__CSIS_DMA2                           200
#define INTREQ__CSIS_DMA3                           201
#define INTREQ__NFI                                 202
#define INTREQ__OIS_FROM_CM0P                       203
#define INTREQ__OVERFLOW_CSIS_PDP                   204
#define INTREQ__PDP0                                205
#define INTREQ__PDP1                                206
#define INTREQ__PDP2                                207
#define INTREQ__PDP3                                208
#define INTREQ__PDP4                                209
#define INTREQ__PDP5                                210
#define INTREQ__PDP6                                211
#define INTREQ__PDP7                                212
#define INTREQ__SENSOR_ABORT                        213
#define INTREQ__SYSMMU_D0_CSIS_S1_NS                214
#define INTREQ__SYSMMU_D0_CSIS_S1_S                 215
#define INTREQ__SYSMMU_D0_CSIS_S2_NS                216
#define INTREQ__SYSMMU_D0_CSIS_S2_S                 217
#define INTREQ__SYSMMU_D1_CSIS_S1_NS                218
#define INTREQ__SYSMMU_D1_CSIS_S1_S                 219
#define INTREQ__SYSMMU_D1_CSIS_S2_NS                220
#define INTREQ__SYSMMU_D1_CSIS_S2_S                 221
/*
#define Reserved for SW interrupt                   222
*/
#define	INTREQ__TBASE                               223
#define	INTREQ__SECURE_LOG                          224
#define INTREQ__RPMB                                225
#define INTREQ__S2_LV3_TABLE_ALLOC                  226
#define INTREQ__DUMMY_S2MPU                         227
#define INTREQ__TEEGRIS_EVENT                       228
#define INTREQ__TEEGRIS_PANIC                       229
#define INTREQ__WDTRESET_OIS_MCU                    230
#define INTREQ__BYRP_0                              231
#define INTREQ__BYRP_1                              232
#define INTREQ__CSTAT_CH0_0                         233
#define INTREQ__CSTAT_CH0_1                         234
#define INTREQ__CSTAT_CH1_0                         235
#define INTREQ__CSTAT_CH1_1                         236
#define INTREQ__CSTAT_CH2_0                         237
#define INTREQ__CSTAT_CH2_1                         238
#define INTREQ__SYSMMU_D0_CSTAT_S1_NS               239
#define INTREQ__SYSMMU_D0_CSTAT_S1_S                240
#define INTREQ__SYSMMU_D0_CSTAT_S2_NS               241
#define INTREQ__SYSMMU_D0_CSTAT_S2_S                242
#define INTREQ__SYSMMU_D1_CSTAT_S1_NS               243
#define INTREQ__SYSMMU_D1_CSTAT_S1_S                244
#define INTREQ__SYSMMU_D1_CSTAT_S2_NS               245
#define INTREQ__SYSMMU_D1_CSTAT_S2_S                246
#define INTREQ__DPU_DECON0_DQE_DIMMING_END          247
#define INTREQ__DPU_DECON0_DQE_DIMMING_START        248
#define INTREQ__DPU_DECON0_EXTRA                    249
#define INTREQ__DPU_DECON0_FRAME_DONE               250
#define INTREQ__DPU_DECON0_FRAME_START              251
#define INTREQ__DPU_DECON1_EXTRA                    252
#define INTREQ__DPU_DECON1_FRAME_DONE               253
#define INTREQ__DPU_DECON1_FRAME_START              254
#define INTREQ__DPU_DMA_DSIMFC0                     255
#define INTREQ__DPU_DMA_L0                          256
#define INTREQ__DPU_DMA_L1                          257
#define INTREQ__DPU_DMA_L2                          258
#define INTREQ__DPU_DMA_L3                          259
#define INTREQ__DPU_DMA_L4                          260
#define INTREQ__DPU_DMA_L5                          261
#define INTREQ__DPU_DMA_L6                          262
#define INTREQ__DPU_DMA_L7                          263
#define INTREQ__DPU_DMA_RCD0                        264
#define INTREQ__DPU_DMA_WB                          265
#define INTREQ__DPU_DPP_L0                          266
#define INTREQ__DPU_DPP_L1                          267
#define INTREQ__DPU_DPP_L2                          268
#define INTREQ__DPU_DPP_L3                          269
#define INTREQ__DPU_DPP_L4                          270
#define INTREQ__DPU_DPP_L5                          271
#define INTREQ__DPU_DPP_L6                          272
#define INTREQ__DPU_DPP_L7                          273
#define INTREQ__DPU_DSIM0                           274
#define INTREQ__SYSMMU_D0_DPU_S1_NS                 275
#define INTREQ__SYSMMU_D0_DPU_S1_S                  276
#define INTREQ__SYSMMU_D0_DPU_S2_NS                 277
#define INTREQ__SYSMMU_D0_DPU_S2_S                  278
#define INTREQ__SYSMMU_D1_DPU_S1_NS                 279
#define INTREQ__SYSMMU_D1_DPU_S1_S                  280
#define INTREQ__SYSMMU_D1_DPU_S2_NS                 281
#define INTREQ__SYSMMU_D1_DPU_S2_S                  282
#define INTREQ__G3D_IRQEVENT                        283
#define INTREQ__G3D_IRQGPU                          284
#define INTREQ__G3D_IRQJOB                          285
#define INTREQ__G3D_IRQMMU                          286
#define INTREQ__G3D_O_OCP_THROTT                    287
#define INTREQ__SYSMMU_D0_G3D_S2_NS                 288
#define INTREQ__SYSMMU_D0_G3D_S2_S                  289
#define INTREQ__SYSMMU_D1_G3D_S2_NS                 290
#define INTREQ__SYSMMU_D1_G3D_S2_S                  291
#define INTREQ__GNSS_SW_INT                         292
#define INTREQ__GNSS_WAKEUP_INT                     293
#define INTREQ__GNSS_WDOG_RESET                     294
#define INTREQ__GPIO_HSI_UFS                        295
#define INTREQ__S2MPU_D_HSI_NS                      296
#define INTREQ__S2MPU_D_HSI_S                       297
#define INTREQ__UFS_EMBD                            298
#define INTREQ__FROM_ICPU_TO_HOST_0                 299
#define INTREQ__FROM_ICPU_TO_HOST_1                 300
#define INTREQ__FROM_ICPU_TO_HOST_2                 301
#define INTREQ__FROM_ICPU_TO_HOST_3                 302
#define INTREQ__FROM_ICPU_TO_HOST_4                 303
#define INTREQ__FROM_ICPU_TO_HOST_5                 304
#define INTREQ__FROM_ICPU_TO_HOST_6                 305
#define INTREQ__FROM_ICPU_TO_HOST_7                 306
#define INTREQ__SYSMMU_D_ICPU_S1_NS                 307
#define INTREQ__SYSMMU_D_ICPU_S1_S                  308
#define INTREQ__SYSMMU_D_ICPU_S2_NS                 309
#define INTREQ__SYSMMU_D_ICPU_S2_S                  310
#define INTREQ__GDC_IRQ0                            311
#define INTREQ__JPEG0                               312
#define INTREQ__LME_O_INT                           313
#define INTREQ__M2M                                 314
#define INTREQ__SYSMMU_D0_M2M_S1_NS                 315
#define INTREQ__SYSMMU_D0_M2M_S1_S                  316
#define INTREQ__SYSMMU_D0_M2M_S2_NS                 317
#define INTREQ__SYSMMU_D0_M2M_S2_S                  318
#define INTREQ__SYSMMU_D1_M2M_S1_NS                 319
#define INTREQ__SYSMMU_D1_M2M_S1_S                  320
#define INTREQ__SYSMMU_D1_M2M_S2_NS                 321
#define INTREQ__SYSMMU_D1_M2M_S2_S                  322
#define INTREQ__MFC                                 323
#define INTREQ__SYSMMU_MFC_interrupt_s1_ns          324
#define INTREQ__SYSMMU_MFC_interrupt_s1_s           325
#define INTREQ__SYSMMU_MFC_interrupt_s2_ns          326
#define INTREQ__SYSMMU_MFC_interrupt_s2_s           327
#define INTREQ__DMC_ECC_CORERR_MIF0                 328
#define INTREQ__DMC_ECC_UNCORERR_MIF0               329
#define INTREQ__DMC_PPMPINT_MIF0                    330
#define INTREQ__DMC_TEMPERR_MIF0                    331
#define INTREQ__DMC_TEMPHOT_MIF0                    332
#define INTREQ__DMC_TZCINT_MIF0                     333
#define INTREQ__DMC_ECC_CORERR_MIF1                 334
#define INTREQ__DMC_ECC_UNCORERR_MIF1               335
#define INTREQ__DMC_PPMPINT_MIF1                    336
#define INTREQ__DMC_TEMPERR_MIF1                    337
#define INTREQ__DMC_TEMPHOT_MIF1                    338
#define INTREQ__DMC_TZCINT_MIF1                     339
#define INTREQ_CPALV_GPIO                           340
#define INTREQ_MODEM_PPMU                           341
#define INTREQ_RESET_REQ                            342
#define INTREQ_WOW_DVFS                             343
#define INTREQ__DIT_RxDst00                         344
#define INTREQ__DIT_RxDst01                         345
#define INTREQ__DIT_RxDst1                          346
#define INTREQ__DIT_RxDst02                         347
#define INTREQ__DIT_RxDst2                          348
#define INTREQ__DIT_RxDst03                         349
#define INTREQ__DIT_RxSrc0                          350
#define INTREQ__DIT_RxSrc1                          351
#define INTREQ__DIT_RxSrc2                          352
#define INTREQ__DIT_TxDst0                          353
#define INTREQ__DIT_TxDst1                          354
#define INTREQ__DIT_TxDst2                          355
#define INTREQ__DIT_TxSrc0                          356
#define INTREQ__DIT_TxSrc1                          357
#define INTREQ__DIT_TxSrc2                          358
#define INTREQ__PDMA0                               359
#define INTREQ__SPDMA0                              360
#define INTREQ__SYSMMU_AXI_D_NOCL1A_O_INTERRUPT_S2_NS   361
#define INTREQ__SYSMMU_AXI_D_NOCL1A_O_INTERRUPT_S2_S    362
#define INTREQ_SYSMMU_D_DIT_O_INTERRUPT_S2_NS       363
#define INTREQ_SYSMMU_D_DIT_O_INTERRUPT_S2_S        364
#define INTREQ__OCP_THROTT_INTR_NPUS                365
#define INTREQ__SYSMMU_D0_NPUS_INTERRUPT_S1_NS      366
#define INTREQ__SYSMMU_D0_NPUS_INTERRUPT_S1_S       367
#define INTREQ__SYSMMU_D0_NPUS_INTERRUPT_S2_NS      368
#define INTREQ__SYSMMU_D0_NPUS_INTERRUPT_S2_S       369
#define INTREQ__SYSMMU_D1_NPUS_INTERRUPT_S1_NS      370
#define INTREQ__SYSMMU_D1_NPUS_INTERRUPT_S1_S       371
#define INTREQ__SYSMMU_D1_NPUS_INTERRUPT_S2_NS      372
#define INTREQ__SYSMMU_D1_NPUS_INTERRUPT_S2_S       373
#define O_INTREQ_NS_NPUS_HOST_0                     374
#define O_INTREQ_NS_NPUS_HOST_1                     375
#define O_INTREQ_NS_NPUS_HOST_2                     376
#define O_INTREQ_NS_NPUS_HOST_3                     377
#define O_INTREQ_NS_NPUS_HOST_4                     378
#define O_INTREQ_NS_NPUS_HOST_5                     379
#define O_INTREQ_NS_NPUS_HOST_6                     380
#define O_INTREQ_S_NPUS_HOST_0                      381
#define O_INTREQ_S_NPUS_HOST_1                      382
#define O_INTREQ_S_NPUS_HOST_2                      383
#define O_INTREQ_S_NPUS_HOST_3                      384
#define O_INTREQ_S_NPUS_HOST_4                      385
#define O_INTREQ_S_NPUS_HOST_5                      386
#define O_INTREQ_S_NPUS_HOST_6                      387
#define INTREQ__GPIO_PERI                           388
#define INTREQ__GPIO_PERIMMC                        389
#define INTREQ__MMC_CARD                            390
#define INTREQ__OTP_CON_TOP                         391
#define INTREQ__PWM0                                392
#define INTREQ__PWM1                                393
#define INTREQ__PWM2                                394
#define INTREQ__PWM3                                395
#define INTREQ__PWM4                                396
#define INTREQ__S2MPU_D_PERI_S2_NS                  397
#define INTREQ__S2MPU_D_PERI_S2_S                   398
#define INTREQ__TMU                                 399
#define INTREQ__UART_DBG                            400
#define INTREQ__USI00_I2C                           401
#define INTREQ__USI00_USI                           402
#define INTREQ__USI01_I2C                           403
#define INTREQ__USI01_USI                           404
#define INTREQ__USI02_I2C                           405
#define INTREQ__USI02_USI                           406
#define INTREQ__USI03_I2C                           407
#define INTREQ__USI03_USI                           408
#define INTREQ__USI04_I2C                           409
#define INTREQ__USI04_USI                           410
#define INTREQ__USI05_USI_OIS                       411
#define INTREQ__USI06_USI_OIS                       412
#define INTREQ__USI07_I2C                           413
#define INTREQ__WDT0                                414
#define INTREQ__WDT1                                415
#define INTREQ__MCFP_0                              416
#define INTREQ__MCFP_1                              417
#define INTREQ__RGBP_0                              418
#define INTREQ__RGBP_1                              419
#define INTREQ__SYSMMU_D0_RGBP_S1_NS                420
#define INTREQ__SYSMMU_D0_RGBP_S1_S                 421
#define INTREQ__SYSMMU_D0_RGBP_S2_NS                422
#define INTREQ__SYSMMU_D0_RGBP_S2_S                 423
#define INTREQ__SYSMMU_D1_RGBP_S1_NS                424
#define INTREQ__SYSMMU_D1_RGBP_S1_S                 425
#define INTREQ__SYSMMU_D1_RGBP_S2_NS                426
#define INTREQ__SYSMMU_D1_RGBP_S2_S                 427
#define INTREQ__SYSMMU_D2_RGBP_S1_NS                428
#define INTREQ__SYSMMU_D2_RGBP_S1_S                 429
#define INTREQ__SYSMMU_D2_RGBP_S2_NS                430
#define INTREQ__SYSMMU_D2_RGBP_S2_S                 431
#define INTREQ__SYSMMU_D3_RGBP_S1_NS                432
#define INTREQ__SYSMMU_D3_RGBP_S1_S                 433
#define INTREQ__SYSMMU_D3_RGBP_S2_NS                434
#define INTREQ__SYSMMU_D3_RGBP_S2_S                 435
#define INTREQ__S2MPU_D_USB_NS                      436
#define INTREQ__S2MPU_D_USB_S                       437
#define INTREQ__USB2_REMOTE_CONNECT_GIC             438
#define INTREQ__USB2_REMOTE_TIMER_GIC               439
#define INTREQ__USB2_REMOTE_WAKEUP_GIC              440
#define INTREQ__USB2_REWA_WAKEUP_REQ                441
#define INTREQ__USB20DRD_0                          442
#define INTREQ__USB20DRD_1                          443
#define INTREQ__USB20_PHY_FSVPLUS_MINUS_GIC         444
#define WB2AP_CFG_REQ                               445
#define WB2AP_WDOG_RESET_REQ_IRQ                    446
#define INTREQ__MCSC_0                              447
#define INTREQ__MCSC_1                              448
#define INTREQ__SYSMMU_D_YUVP_S1_NS                 449
#define INTREQ__SYSMMU_D_YUVP_S1_S                  450
#define INTREQ__SYSMMU_D_YUVP_S2_NS                 451
#define INTREQ__SYSMMU_D_YUVP_S2_S                  452
#define INTREQ__YUVP_0                              453
#define INTREQ__YUVP_1                              454
#define INTREQ_O_INTERRUPT_S2_S                     455
#define INTREQ_O_INTERRUPT_S2_NS                    456
#define INTREQ_O_INTERRUPT_S1_S                     457
#define INTREQ_O_INTERRUPT_S1_NS                    458
#define INTREQ_SCI_Lite_INT_AST                     459
#define INTREQ_TREX_DEBUG_INT                       460
#define INTREQ_CPU2DRAM_PPMU_INT                    461
#define INTREQ_TREX_PPMU                            462
#define INTREQ__WOW_DVFS_SMC_GIC                    463
#define INTREQ_PUF_FAULT_DETECT_QL                  464
#define INTREQ_PUF_FAULT_DETECT_QF                  465
#define INTREQ_PUF_DUAL_FF_RESULT                   466
#define INTREQ_PUF_KEY_NO_GEN                       467
#define INTREQ__PUF_INTEGRITY_ERROR                 468
#define INTREQ__PUF_UNCORRECT_INT                   469
#define INTREQ__PUF_SEC_INT                         470
#define INTREQ__NOCL0_CON_ALIVE_INTERRUPT           471
#define INTREQ__HWSEMA_ACK_INT                      472
#define INTREQ__HWSEMA_TIMEOUT                      473
#define INTREQ__HWSEMA_KMERR                        474
#define INTREQ__HWSEMA_KM                           475
#define INTREQ__HWSEMA_DMAERR                       476
#define INTREQ__HWSEMA_DMA                          477
#define INTREQ__HWSEMA_SCERRINT                     478
#define INTREQ__HWSEMA_INT                          479

#endif /* _DT_BINDINGS_INTERRUPT_CONTROLLER_EXYNOS_S5E8835_H */
