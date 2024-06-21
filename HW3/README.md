# Description
請參考process.c與kernel source內的資料結構  
列出每一個process的pid,uid,comm  
#### 繳交內容
1. module輸出
2. ps -ax -opid,uid,comm的輸出
3. module source code
 
#### 可參考資料結構與function
* include/linux/cred.h
* struct cred
* struct task_struct
* get_task_cred
