# Description
請使用kernel版本3.19.0  
分別 編譯並載入`hello`與`hellop`這兩個kernel module   
並另外撰寫一個`hellop3`可傳入整數*a*與整數*b*和字串*c*在載入時透過printk印出*a* * *b*次的*c*字串
 
以下列依序指令載入與卸除
```bash
uname -a
insmod hello.ko
insmod hellop.ko howmany=2 whom="IIS"
insmod hellop3.ko a=3 b=2 c=mytext
lsmod | grep hello
rmmod hellop
rmmod hello
rmmod hellop3
lsmod | grep hello
```
## 繳交項目
1. 執行作業中指令的畫面(截圖)
2. 節錄dmesg中所新增的內容(截圖或文字檔)
3. hellop3.c 與 hellop3.ko 

# Reference Information
## Module Makefile example
```make
CONFIG_MODULE_SIG=n
 
ifeq ($(KERNELRELEASE),)
        # Assume the source tree is where the running kernel was built
        # You should set KERNELDIR in the environment if it's elsewhere
        KERNELDIR ?= /lib/modules/$(shell uname -r)/build
        # The current directory is passed to sub-makes as argument
        PWD := $(shell pwd)
 
modules:
        $(MAKE) -C $(KERNELDIR) M=$(PWD) modules
 
modules_install:
        $(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
 
clean:
        rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
 
.PHONY: modules modules_install clean
 
else
        # called from kernel build system: just declare what our modules are
        obj-m := hello.o
 
endif
```
