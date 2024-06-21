# Description
### Download or Create the files below.
- mysyscall/mysyscall.c  
- mysyscall/Makefile
```make
obj-y:=mysyscall.o
```
### Rewrite the files below.

- Makefile
```make
...
core-y += kernel/ mm/ fs/ ipc/ security/ crypto/ block/ mysyscall/
...
```
- arch/x86/syscalls/syscall_32.tbl
```
...
400    i386    mysyscall    sys_mysyscall
...
```
- arch/x86/syscalls/syscall_64.tbl
```
...
400    common    mysyscall    sys_mysyscall
...
```
### rebuild kernel and run mysyscalltest binary

```bash
chmod 555 mysyscalltest
uname -a
./mysyscalltest 學號
```
請擷取執行畫面與syscall印出的內容
 
#### 繳交項目
1. kernel檔案 vmlinuz-3.19.0+
2. 執行畫面截圖
3. kernel syscall印出的截圖(可透過dmesg或擷取/var/log/syslog中的訊息)
