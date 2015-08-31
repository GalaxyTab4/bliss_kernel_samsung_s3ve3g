export ARCH=arm
export INSTALL_PATH=~/linux/deb_arm/boot
export INSTALL_MOD_PATH=~/linux/deb_arm

./mkbootimg --base 0x00000000 --kernel arch/arm/boot/zImage --ramdisk_offset 0x02000000 --tags_offset 0x01E00000 --pagesize 2048 --cmdline 'root=/dev/mmcblk1p2 console=tty0' --ramdisk ramdisk/initrd.img.gz --dt dt.img -o bootlinux.img

sudo -E make modules_install
sudo cp arch/arm/boot/zImage ~/linux/deb_arm/boot
sudo cp System.map ~/linux/deb_arm/boot/
