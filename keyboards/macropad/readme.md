# macropad

3x3 macropad with rotary encoder, based on a STM32F411.

Inspired by and with parts from [VOID9](https://github.com/victorlucachi/void9) by [victorlucachi](https://victorlucachi.ro/).

## Flashing

Entering bootloader via holding onto the **booto** button, then pressing and holding to the **nrst** button. Let go of the **nrst** button and then the **booto** button to enter DFU mode.

Compile and flash with: 
```
qmk flash -kb macropad -km default
```

# useful links:

* [handwiring black pill (reddit)](https://www.reddit.com/r/olkb/comments/mhrtra/how_to_customize_handwired_layout_in_blackpill_mcu/)

* [Pill60 keyboard config (STM32 + encoder)](https://github.com/IktaS/qmk_firmware/tree/pill60/keyboards/handwired/pill60)

* [VOID9 wiring guide](https://victorlucachi.ro/journal/void9-wiring-guide/)

