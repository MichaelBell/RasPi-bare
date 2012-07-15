Bare metal Pi project - pulled together from the forum post:
http://www.raspberrypi.org/phpBB3/viewtopic.php?f=72&t=10850

To get it running, download the arm-none-eabi package from https://launchpad.net/gcc-arm-embedded and extract that somewhere, e.g. /home/user/pi

Note that if you're on 64-bit Linux, make sure you have ia32-libs installed.

Then clone this repo into e.g. /home/user/pi/bare

The important thing is the arm-none-eabit toolchain should be extracted in the parent directory of this git repo.  (If you want to change that just edit the first line of the Makefile).

To build an image for the Pi, just run make.  The image is built to bin/kernel.img

Copy this kernel.img to a standard Pi SD card, replacing the standard Linux kernel.img.  Then watch the Pi's OK LED blink!
