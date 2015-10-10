#!/bin/bash
TC=/roms/aosp/prebuilts/gcc/linux-x86/arm/arm-eabi-4.8/bin
TCP=arm-eabi-
KERNEL_DEFCONFIG=matissewifi_nomodules_defconfig
#KERNEL_DEFCONFIG=msm8226-sec_defconfig
#SELINUX_DEFCONFIG=selinux_defconfig
#VARIANT_DEFCONFIG=msm8226-sec_matissewifi_defconfig
rm -frv build
make clean && make mrproper
mkdir -pv build/out/modules
export ARCH=arm
export CROSS_COMPILE=$TC/$TCP
export CC=$TC/arm-eabi-gcc
export STRIP=$TC/arm-eabi-strip
export SIZE=$TC/arm-eabi-size
make $KERNEL_DEFCONFIG VARIANT_DEFCONFIG=$VARIANT_DEFCONFIG \
			DEBUG_DEFCONFIG=$DEBUG_DEFCONFIG \
			SELINUX_DEFCONFIG=$SELINUX_DEFCONFIG 
#make menuconfig && wait
#make -j12 CONFIG_DEBUG_SECTION_MISMATCH=y > make.kernel.log 2>&1
#make -j12 modules > make.modules.log 2>&1
make -j12 && make modules
./tools/dtbTool1 -o build/out/boot.img-dtb -p ./scripts/dtc/ ./arch/arm/boot/
cp arch/arm/boot/*zImage build/out/boot.img-zImage
find -type f -name *.ko -exec cp {} build/out/modules/ \;
ls -al build/out/modules/
cd build/out/modules/
$STRIP --strip-unneeded *.ko
cd ../../../
ls -al build/out/modules/ build/out/


./tools/mkbootimg \
--kernel build/out/boot.img-zImage \
--dt build/out/boot.img-dtb \
--ramdisk ramdisk/ramdisk-aosp-5.1.img \
--base 0x00000000 --ramdisk_offset 0x02000000 --tags_offset 0x01E00000 --pagesize 2048 \
--cmdline 'console=null androidboot.hardware=qcom user_debug=31 msm_rtb.filter=0x37 ehci-hcd.park=3  androidboot.selinux=permissive' \
-o build/out/boot.img

echo Done !
