Bare metal Pi project - pulled together from the forum post:
http://www.raspberrypi.org/phpBB3/viewtopic.php?f=72&t=10850

To get it running, download the arm-none-eabi package from https://launchpad.net/gcc-arm-embedded and extract that somewhere, e.g. /home/user/pi

Then clone this repo into e.g. /home/user/pi/bare

The important thing is the arm-none-eabit toolchain should be extracted in the parent directory of this git repo.  (If you want to change that just edit the first line of the Makefile).
