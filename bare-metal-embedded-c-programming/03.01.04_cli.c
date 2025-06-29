/**
 * COMPILATION (GCC TOOLCHAIN)
 *
 * make -j9 all
 * arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"Startup/startup_stm32f411retx.d" -MT"Startup/startup_stm32f411retx.o" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "Startup/startup_stm32f411retx.o" "../Startup/startup_stm32f411retx.s"
 * arm-none-eabi-gcc "../Src/main.c" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Src/main.d" -MT"Src/main.o" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "Src/main.o"
 * arm-none-eabi-gcc "../Src/syscalls.c" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Src/syscalls.d" -MT"Src/syscalls.o" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "Src/syscalls.o"
 * arm-none-eabi-gcc "../Src/sysmem.c" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Src/sysmem.d" -MT"Src/sysmem.o" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "Src/sysmem.o"
 * arm-none-eabi-gcc -o "2_RegisterManipulation.elf" @"objects.list"   -mcpu=cortex-m4 -T"/Users/junhwang/STM32CubeIDE/workspace_1.18.1/2_RegisterManipulation/STM32F411RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="2_RegisterManipulation.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
 *
 * -fcyclomatic-complexity: Remove if possible
 *
 * If there is issue remove
 * arm-none-eabi-size  2_RegisterManipulation.elf
 * arm-none-eabi-objdump -h -S 2_RegisterManipulation.elf  > "2_RegisterManipulation.list"
 * 
 * 
 * 
 * UPLOADING (OPENOCD)
 * 
 * on one terminal start openocd 
 * openocd -f board/st_nucleo_f4.cfg
 * 
 * on another terminal start gdb session 
 * arm-none-eabi-gdb
 * 
 * within that session start connection
 * target remote localhost:3333
 * 
 * before loading the firmware, reset and initialize the board: 
 * monitor reset init
 * 
 * 
 * load the firmware onto the microcontroller: 
 * monitor flash write_image erase 2_RegisterManipulation.elf
 * 
 * After successfully loading the firmware, reset the board 
 * monitor reset init
 * 
 * Resume the execution of the code on the microcontroller 
 * monitor resume
 */