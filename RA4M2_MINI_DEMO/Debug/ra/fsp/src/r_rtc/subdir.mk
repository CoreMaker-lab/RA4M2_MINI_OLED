################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/r_rtc/r_rtc.c 

C_DEPS += \
./ra/fsp/src/r_rtc/r_rtc.d 

OBJS += \
./ra/fsp/src/r_rtc/r_rtc.o 

SREC += \
RA4M2_MINI_DEMO.srec 

MAP += \
RA4M2_MINI_DEMO.map 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/r_rtc/%.o: ../ra/fsp/src/r_rtc/%.c
	$(file > $@.in,-mcpu=cortex-m33 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_CORE=CM33 -D_RA_ORDINAL=1 -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/src" -I"." -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra/fsp/inc" -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra/fsp/inc/api" -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra/fsp/inc/instances" -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra_gen" -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra_cfg/fsp_cfg/bsp" -I"C:/Users/Administrator/e2_studio/workspace/RA4M2_MINI_DEMO/ra_cfg/fsp_cfg" -std=c99 -Wno-stringop-overflow -Wno-format-truncation --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

