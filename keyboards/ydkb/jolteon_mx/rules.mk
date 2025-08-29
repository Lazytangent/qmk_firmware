# project specific files
SRC ?=	matrix.c ec_matrix.c led.c

# MCU name

# Bootloader selection
MCU_LDSCRIPT = STM32F103CBT6_uf2_bootloader

# Build Options
#   change yes to no to disable
#
CUSTOM_MATRIX           = yes # Custom matrix file
UNICODE_ENABLE          = yes # Unicode
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
# RGB_MATRIX_DRIVER = ws2812
AUDIO_ENABLE = no           # Audio output
SLEEP_LED_ENABLE = no

# WS2812_DRIVER_REQUIRED = yes


# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
OPT_DEFS += -DCORTEX_VTOR_INIT=0x4000

VPATH += keyboards/ydkb/00common
