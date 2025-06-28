# pretpad

![pretpad](https://imgur.com/gallery/pretpad-keyboard-layout-nr0SThe)

A macropad for personal use.
Keys opens browser, puts laptop to sleep, pause/play song, and skips song on Spotify. Rotary encoder controls volume and its switch mutes all audio. OLED Screen displays the name of the current song and pause/play icon. Also, two LEDs are situated at the bottom.

* Keyboard Maintainer: [Presley](https://github.com/Pretlei)
* Hardware Supported: Seeed XIAO RP2040 Microcontroller PCB
* Hardware Availability: Custom macropad

Make example for this keyboard (after setting up your build environment):

    make pretpad:default

Flashing example for this keyboard:

    make pretpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
