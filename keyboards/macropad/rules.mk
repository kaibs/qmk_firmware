# MCU name
MCU = STM32F411

STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

# Bootloader selection
BOOTLOADER = stm32-dfu

DFU_ARGS = -d 0483:DF11 -a 0 -s 0x08000000:leave
DFU_SUFFIX_ARGS = -v 0483 -p DF11


# Build Options

BOOTMAGIC_ENABLE = yes    # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes     # Mouse keys
EXTRAKEY_ENABLE = yes     # Audio control and System control
CONSOLE_ENABLE = yes      # Console for debug
COMMAND_ENABLE = yes      # Commands for debug and configuration
SLEEP_LED_ENABLE = no     # Breathing sleep LED during USB suspend
NKRO_ENABLE = no          # USB Nkey Rollover
BACKLIGHT_ENABLE = no     # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow
AUDIO_ENABLE = no         # Audio output
ENCODER_ENABLE = yes	  #	Enable usage of encoders
