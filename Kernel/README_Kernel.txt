################################################################################
1. How to Build
        - get Toolchain
                From android git server, codesourcery and etc ..
                - gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-
        - edit Makefile
                edit "CROSS_COMPILE" to right toolchain path(You downloaded).
                        EX)  CROSS_COMPILE=../aarch64-linux-android-4.9/bin/aarch64-linux-android-
                        EX)  CROSS_COMPILE=/usr/local/toolchain/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android- // check the location of toolchain
        - to Build

                $ make a10_00_defconfig
                $ make menuconfig (edit your kernel as you like)
                $ make -j64

2. Output files
        - Kernel : arch/arm64/boot/Image
        - module : drivers/*/*.ko

3. How to Clean
        $ make clean
################################################################################
