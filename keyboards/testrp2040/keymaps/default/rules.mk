# Please set the following according to the selection of the hardware implementation option.
ENCODER_ENABLE = yes   ## enable encoder
CONSOLE_ENABLE = yes   ## debugging via console


#RGBLIGHT_ENABLE = yes  # Activates RGB support
WS2812_DRIVER = vendor # Use the RP2040's PIO interface; Idk whats the actual use, but it is necessary for the leds




#Info
#Zum compilen in den ~/qmk_firmware/keyboards Ordner und ausführen:  qmk compile -kb testrp2040 -km default
#Zum flashen rp ausstecken und bootsel drücken dann an Strom und unter qmk_firmware liegt testrp2040_default.uf2 einfach per dran and drop
#

