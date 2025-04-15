# a10

![a10](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [404NOTFOUND](https://github.com/404NOTFOUND)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make mykeyboard/a10:default

Flashing example for this keyboard:

    make mykeyboard/a10:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

## 项目来源

[自定义按键小键盘](https://oshwhub.com/TianGod/new_pad)

由于该开源项目使用的qmk固件较旧，源码已经无法使用最新的QMK MSYS编译，且使用的主控芯片ATMEGA32u4价格贵且容量小，不具备实用性。

因此在此基础上更新了源码并更换主控芯片为stm32c8t6（踩坑记录：不能使用stm32c6t6替代，容量32kb无法烧录程序）
