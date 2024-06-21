# Description
1. 請安裝任一個Linux發行版本
2. 安裝完候登入系統執行
`cat /etc/*rele* ; uname -a`
擷取執行結果畫面

3. 請根據所安裝的Linux系統中的kernel版本
下載相同major版本的source code並編譯安裝
4. 以新的kernel開機後執行相同的命令並且擷取執行結果畫面
 
請繳交兩個kernel版本資訊的截圖畫面
# Reference Information
## Operating System
```bash
https://old-releases.ubuntu.com/releases/14.04.0/
https://old-releases.ubuntu.com/releases/14.04.0/ubuntu-14.04-desktop-amd64.iso
```
## linux kernel archive
```bash
https://mirrors.edge.kernel.org/pub/linux/kernel
```
## Commands
Enter the following command into terminal.
```bash
git clone git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
git reset --hard v3.19
 
# make config
# make menuconfig
# make oldconfig
## please choose one of 3 commands above to use as the configuration command
make -j $(nproc)
# eg. make -j32
make modules_install
make install
 
update-grub
```
```base
####/etc/default/grub
##
#GRUB_DEFAULT=0
#GRUB_HIDDEN_TIMEOUT=0
#GRUB_HIDDEN_TIMEOUT_QUIET=true
```
