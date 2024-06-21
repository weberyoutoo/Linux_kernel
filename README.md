# Linux_kernel
Homework

## Linux Cross Reference
The approaches below are used to get the Linux kernel source code references, such as struct definition, function definition, etc.
### 1. LXR
LXR (also known as "Linux Cross Referencer") is an online toolset for browssing the Linux source code, which covers a wide range of Linux versions.  
[https://lxr.linux.no/](https://lxr.linux.no/)
### 2. Cscope
Cscope is a developer's tool for browsing source code. ([Cscope Home Page](https://cscope.sourceforge.net/))
- create
```bash
#列出檔案
find /usr/src/linux-3.9.0 -type f -name "*.[chlysS]" > cscope.files
```
- usage
```bash
#建立索引
cscope -b -q -k
#顯示路徑
cscope -p4
```
