

#-------------------------------------------------------------------------------
# current project
#-------------------------------------------------------------------------------

# examples

PROJECT = projects/proyecto_final
#PROJECT = projects/proyecto_cad
#PROJECT = projects/proyecto_cda
#PROJECT = projects/proyecto_blinky_modificado
#PROJECT = examples/blinky
#PROJECT = examples/blinky_rit
#PROJECT = examples/adc_fir_dac
#PROJECT = examples/freertos_blinky
#PROJECT = sapi_examples/edu-ciaa-nxp/sapi_usb_host_01_mass_storage_fatfilesystem
#PROJECT = sapi_examples/edu-ciaa-nxp/servo_01

# sapi_examples

#PROJECT = sapi_examples/edu-ciaa-nxp/gpio_01_switches_leds
#PROJECT = sapi_examples/edu-ciaa-nxp/gpio_02_blinky
#PROJECT = sapi_examples/edu-ciaa-nxp/gpio_03_blinky_switch
#PROJECT = sapi_examples/edu-ciaa-nxp/gpio_04_led_sequences
#PROJECT = sapi_examples/edu-ciaa-nxp/gpio_05_keypad_7segment

#PROJECT = sapi_examples/edu-ciaa-nxp/uart_01_echo
#PROJECT = sapi_examples/edu-ciaa-nxp/uart_02_receive_string_blocking
#PROJECT = sapi_examples/edu-ciaa-nxp/uart_03_receive_string
#PROJECT = sapi_examples/edu-ciaa-nxp/uart_04_bridge_esp8266

#PROJECT = sapi_examples/edu-ciaa-nxp/adc_dac_01

#PROJECT = sapi_examples/edu-ciaa-nxp/tick_01_tickHook
#PROJECT = sapi_examples/edu-ciaa-nxp/rtc_01

#PROJECT = sapi_examples/edu-ciaa-nxp/pwm_01
#PROJECT = sapi_examples/edu-ciaa-nxp/servo_01

#PROJECT = sapi_examples/edu-ciaa-nxp/i2c_01_hmc5883l

#PROJECT = sapi_examples/edu-ciaa-nxp/spi_01_sdcard_fatfilesystem

#PROJECT = sapi_examples/edu-ciaa-nxp/cooperative_os_scheduler_01_seos
#PROJECT = sapi_examples/edu-ciaa-nxp/cooperative_os_scheduler_02_seos_background_foreground
#PROJECT = sapi_examples/edu-ciaa-nxp/cooperative_os_scheduler_03_seos_Pont2014

#PROJECT = sapi_examples/edu-ciaa-nxp/freeOSEK_01_blinky

#PROJECT = sapi_examples/edu-ciaa-nxp/freeRTOS_01_blinky
#PROJECT = sapi_examples/edu-ciaa-nxp/freeRTOS_02_ChanFatFS_SPI_SdCard_ADC_log
#PROJECT = sapi_examples/edu-ciaa-nxp/freeRTOS_03_Queue

# projects

#PROJECT = projects/cumbia
#PROJECT = projects/poncho_biopotenciales
#PROJECT = projects/ili9341
#PROJECT = projects/proyecto_vacio
#-------------------------------------------------------------------------------
# current target
#-------------------------------------------------------------------------------

TARGET = lpc4337_m4
#TARGET = lpc4337_m0
#TARGET = lpc1769
#TARGET = lpc54102_m4
#TARGET = lpc54102_m0
#TARGET = lpc11u68


#-------------------------------------------------------------------------------
# current board (optional)
#-------------------------------------------------------------------------------

BOARD = edu_ciaa_nxp
#BOARD = ciaa_nxp
#BOARD = lpcxpresso1769

#-------------------------------------------------------------------------------

# Object file for multicore applications (only needed by lpc54102_m4 target if
# you need to add an lpc54102_m0 program). For example:
#SLAVE_OBJ_FILE = out/lpc54102_m0/blinky_m0.axf.o

#-------------------------------------------------------------------------------
